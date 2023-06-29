void Declaracao_de_Portas_Setup(){  
  // DECLARAÇÃO DE TIPO DE SAIDA DOS RELÉS ========================================================
        pinMode(Avanco_Bairro_1, OUTPUT);
        pinMode(STOP_Bairro_2, OUTPUT);
        pinMode(Freio_Bairro_3, OUTPUT);
        pinMode(RETORNO_Bairro_4, OUTPUT);
   
        pinMode(Avanco_Centro_5, OUTPUT);
        pinMode(STOP_Centro_6, OUTPUT);
        pinMode(Freio_Centro_7, OUTPUT);
        pinMode(RETORNO_Centro_8, OUTPUT);
  
  // DECLARAÇÃO DE TIPO DE ENTRADAS DOS BOTÕES ====================================================
        pinMode(b1,INPUT_PULLUP);
        pinMode(b2,INPUT_PULLUP);
        pinMode(b3,INPUT_PULLUP);
        pinMode(b4,INPUT_PULLUP);
    
        pinMode(Botao_Mode, INPUT_PULLUP);
        pinMode(Sensor_Bairro,INPUT_PULLUP);
        pinMode(Sensor_Centro,INPUT_PULLUP);
   
        pinMode(A0, INPUT); // DEIXAR ATIVO APENAS EM TESTES!!!
        pinMode(A1, INPUT);
        pinMode(A2, INPUT);
  
  // ESTADO INICIAL DOS RELÉS =====================================================================
        pinMode(Avanco_Bairro_1, HIGH);
        pinMode(STOP_Bairro_2, HIGH);
        pinMode(Freio_Bairro_3, HIGH);
        pinMode(RETORNO_Bairro_4, HIGH);
    
        pinMode(Avanco_Centro_5, HIGH);
        pinMode(STOP_Centro_6, HIGH);
        pinMode(Freio_Centro_7, HIGH);
        pinMode(RETORNO_Centro_8, HIGH);
  
    }