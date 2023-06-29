 



/*
//                  INSTITUTO FEDERAL SUL-RIO-GRANDENSE
//           PROJETO RELÓGIO DA TORRE CRIADO E DESENVOLVIDO POR                                      
//                      DJECSSON LUIS MADRUGA SODRÉ
//                         23 de Junho de 2023
*/





 
//==== DECLARAÇÃO DE BIBLIOTECAS ==================================================================
 #include <dht.h>                     // ..........Sensor de temperatura e umidade
 #include <Wire.h>                    // ..........Sensor de temperatura
 #include <ThreeWire.h>               // ..........Real time clock
 #include <RtcDS1302.h>               // ..........Real time clock
 #include <virtuabotixRTC.h>          // ..........Real time clock
 #include <TimerOne.h>                // ..........Timer Start
 #include <LiquidCrystal.h>           // ..........Display

//==== DECLARAÇÃO DE CONSTANTES E OBJETOS =========================================================
 ThreeWire myWire(23,22,24);          //...........DATA, CLK, RST
 RtcDS1302<ThreeWire> Rtc(myWire);    //...........Placa RTC
 LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //...........Display 16x2
 virtuabotixRTC   myRTC(22, 23, 24);//.......... CLK, DATA, RST declara objeto para o RTC "clk, dat, rst"

//==== DECLARAÇÃO DE PORTAS DIGITAIS ==============================================================
 
 //--- BOTÕES DE AJUSTE MANUAL --------------------------------------------------
 #define b1                      28   //...........Avanço do relógio do bairro
 #define b2                      27   //...........Retorno do relógio do bairro
 #define b3                      25   //...........Avanço do relógio do centro
 #define b4                      26   //...........Retorno do relógio do centro
 #define Botao_Mode              29   //...........Botão de seleção de modo de operação
 #define Sensor_Bairro           20   //...........Sensor do relógio do Bairro
 #define Sensor_Centro           21   //...........Sensor do relógio do centro
 #define pinSensor               32   //...........Pino do Sensor de temperatura e umidade 
 
 //--- RELÉS --------------------------------------------------------------------
 #define Avanco_Bairro_1         46   // 1.........Starte do motor do bairro
 #define STOP_Bairro_2           47   // 2.........Stop do motor do bairro
 #define Freio_Bairro_3          48   // 3.........Freio do bairro
 #define RETORNO_Bairro_4        49   // 4.........Rele de troca de alimentação bairro
 #define Avanco_Centro_5         50   // 5.........Starte do motor do bairro
 #define STOP_Centro_6           51   // 6.........Stop do motor do bairro
 #define Freio_Centro_7          52   // 7.........Freio do bairro
 #define RETORNO_Centro_8        53   // 8.........Rele de troca de alimentação centro
 #define Rele_Centro_9           42   // 9...1.....Rele de troca de alimentação centro
 #define Rele_Centro_10          43   // 10..2.....Rele de troca de alimentação centro
 #define Rele_Centro_11          44   // 11..3.....Rele de troca de alimentação centro
 #define Rele_Centro_12          45   // 12..4.....Rele de troca de alimentação centro


//==== DECLARAÇÃO DE PORTAS ANALÓGICAS ============================================================
 //#define PinBotoes_Bairro A1        //...........Porta Analogica A1
 //#define PinBotoes_Centro A2        //...........Porta Analogica A2
 #define Botao_Reset              0   //...........Botao_Reset
 #define Botao_SELECT             1   //...........Botao_SELECT
 #define sensor_9Hs_Bairro        2   //...........Sensor de posisão B4
 #define sensor_12Hs_Bairro       3   //...........Sensor de posisão B1
 #define sensor_6Hs_Bairro        4   //...........Sensor de posisão B3
 #define sensor_3Hs_Bairro        5   //...........Sensor de posisão B2
 #define sensor_9Hs_Centro        2   //...........Sensor de posisão C4
 #define sensor_12Hs_Centro       3   //...........Sensor de posisão C1
 #define sensor_6Hs_Centro        4   //...........Sensor de posisão C3
 #define sensor_3Hs_Centro        5   //...........Sensor de posisão C2

//==== REGISTROS DE TEMPO =========================================================================
 #define tempoDebounce_Bairro    50   //...........Tempo de resposta de contatos relógio do Bairro
 #define tempoDebounce_Centro    50   //...........Tempo de resposta de contatos relógio do Centro
 #define Tempo_1              30000   //...........Controle de tempo de start
 #define Tempo_2               1000   //...........Controle de tempo de freio
 #define intervalo             2000   //...........Intervalo de leitura do sensor de temperatura
 #define countof(a) (sizeof(a) / sizeof(a[0])) //..Referencias do Timer

//==== VARIÁVEIS GLOBAIS ==========================================================================
 
 //---- BYTE --------------------------------------------------------------------------------------
     dht sensorDHT;
     byte a[8]= {B00110,B01001,B00110,B00000,B00000,B00000,B00000,B00000,};

 //---- INT ---------------------------------------------------------------------------------------     
  // int cont_Sensor_Bairro;
  // int cont_Sensor_Centro;

  // int contador_Bairro = 0;
  // int contador_Centro = 0;

    int estadoBotaoAnt_Bairro = Botao_Reset;
    int estadoBotaoAnt_Centro = Botao_Reset;
    
 //---- BOOL ESTADO INICIAL DOS BOTÕES ------------------------------------------------------------
    bool ligado_1 = false;
    bool ligado_2 = false;
    bool ligado_3 = false;
    bool ligado_4 = false;

    bool Estado_Sensor_Bairro = false;
    bool Estado_Sensor_Centro = false;

    bool Botao_Mode_Desligado = false;

 //---- UNSIGNED LONG -----------------------------------------------------------------------------
    unsigned long delayBotao_Bairro;
    unsigned long delayBotao_Centro;

    unsigned long delayIntervalo;
   
    unsigned long int tempo_anterior_Bairro = 0;
    unsigned long int tempo_anterior_Centro = 0;

    unsigned long int ultima_Posicao_Bairro;
    unsigned long int ultima_Posicao_Centro;

    unsigned long int tempo_auto_Ajuste_Bairro = 0;
    unsigned long int tempo_auto_Ajuste_Centro = 0;
 
    extern volatile unsigned long timer0_millis;

 //---- VOID --------------------------------------------------------------------------------------
    void estadoBotao_Bairro(int botao_Bairro);
    void estadoBotao_Centro(int botao_Centro);
    void botaoApertado_Bairro(int botao_Bairro);
    void botaoApertado_Centro(int botao_Centro);
    void botaoSolto_Bairro(int botao_Bairro);
    void botaoSolto_Centro(int botao_Centro);
    
 //---- STRING SENSORES ANALÓGICOS ----------------------------------------------------------------
    String descBotao_Bairro[6] = {"", "", "09:00 Hs Bairro", "06:00 Hs Bairro", "12:00 Hs Bairro", "03:00 Hs Bairro"};
    String descBotao_Centro[6] = {"", "", "09:00 Hs Centro", "06:00 Hs Centro", "12:00 Hs Centro", "03:00 Hs Centro"};

//==== VOID SETUP E LOOP ==========================================================================
  void setup()
       {
          Declaracao_de_Portas_Setup();
          Date_time();
          lcd.begin(16, 2);
          lcd.createChar(1, a);
          Serial.begin(57600);
        }
 
  void loop()
       {
          CONDICAO_DO_BOTAO_MODE();
        }


















//==== REFERENCIAS E INSPIRAÇÕES ==================================================================
    /*
  SENSOR COMPARADOR TECLADO ANALÓGICO COM LCD KEYPAD SHIELD
                                 https://www.youtube.com/watch?v=onDpyWKSJuI
  
  DESPERTADOR COM ARDUINO E RTC
                                 https://www.youtube.com/watch?v=Nosa-CaEKk4
 
  SEM DELAY NEM MILLIS
             NeoTimer            https://www.youtube.com/watch?v=r20_IpWLYDk
             Zerar o Millis      https://www.youtube.com/watch?v=cmoZujxmhEw
             função millis()     https://www.youtube.com/watch?v=wMKhnHobYkQ
  
  INTERRUPÇÕES
      attachInterrupt            https://www.youtube.com/watch?v=XEjBRHs20Sw
      Interrupção por Timer      https://www.youtube.com/watch?v=7FfhPh9IUyw&list=WL&index=2

  LAÇOS DE REPETIÇÃO
    DO WHILE, BREAK, 
    CONTINUE e GOTO              https://www.youtube.com/watch?v=OLARtXgP7c8
  
  
  
  
  https://www.youtube.com/watch?v=ZW7GZjxM9h0
  
  
  
  
  
  
  
    */