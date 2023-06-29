 void SENSOR_ANALOGICO_DO_BAIRRO(){
           int valBotoes_Bairro = analogRead(A0);//Uzar "A0" apenas para teste, para uso normal usar "A1"
           if ((valBotoes_Bairro < 800) && (valBotoes_Bairro >= 600)) // .......... SELECT 
             {
             estadoBotao_Bairro(Botao_SELECT);
             //Serial.print("Botao_SELECT");
             //Serial.println();
             }
      else if ((valBotoes_Bairro < 600) && (valBotoes_Bairro >= 400)) // ....... 45 Minutos 
             {
             estadoBotao_Bairro(45);
             ultima_Posicao_Bairro = 45;
             tempo_auto_Ajuste_Bairro = millis();
             Serial.print("sensor 45 Minutos Bairro");
             Serial.println();
             }
      else if ((valBotoes_Bairro < 400) && (valBotoes_Bairro >= 200)) // ....... 30 Minutos 
             {
             estadoBotao_Bairro(30);
             ultima_Posicao_Bairro = 30;
             tempo_auto_Ajuste_Bairro = millis();
             Serial.print("sensor 30 Minutos Bairro");
             Serial.println();
             }
      else if ((valBotoes_Bairro < 200) && (valBotoes_Bairro >= 60)) // ........ 00 Minutos 
             {
             estadoBotao_Bairro(00); // Usar "1269" no lugar de "00" caso não reconheça o formato de zero.
             ultima_Posicao_Bairro = 00;
             tempo_auto_Ajuste_Bairro = millis();
             Serial.print("sensor 00 Minutos Bairro");
             Serial.println();
             }
      else if (valBotoes_Bairro < 60) // ....................................... 15 Minutos 
             {
             estadoBotao_Bairro(15);
             ultima_Posicao_Bairro = 15;
             tempo_auto_Ajuste_Bairro = millis();
             Serial.print("sensor 15 Minutos Bairro");
             Serial.println();
             }
      else // ..................................................................... RESET 
           {
           estadoBotao_Bairro(Botao_Reset);
           
           }
        }
 
 void SENSOR_ANALOGICO_DO_CENTRO(){
           int valBotoes_Centro = analogRead(A0);
           if ((valBotoes_Centro < 800) && (valBotoes_Centro >= 600)) // .......... SELECT
             {
             estadoBotao_Centro(Botao_SELECT);
             //Serial.print("Botao_SELECT_Centro");
             //Serial.println();
             }
      else if ((valBotoes_Centro < 600) && (valBotoes_Centro >= 400)) // ....... 45 Minutos 
             {
             estadoBotao_Centro(45);
             ultima_Posicao_Centro = 45;
             tempo_auto_Ajuste_Centro = millis();
             Serial.print("sensor 45 Minutos Centro");
             Serial.println();
             }
      else if ((valBotoes_Centro < 400) && (valBotoes_Centro >= 200)) // ....... 30 Minutos 
             {
             estadoBotao_Centro(30);
             ultima_Posicao_Centro = 30;
             tempo_auto_Ajuste_Centro = millis();
             Serial.print("sensor 30 Minutos Centro");
             Serial.println();
             }
      else if ((valBotoes_Centro < 200) && (valBotoes_Centro >= 60)) // ........ 00 Minutos 
             {
             estadoBotao_Centro(00); // Usar "1269" no lugar de "00" caso não reconheça o formato de zero.
             ultima_Posicao_Centro = 00;
             tempo_auto_Ajuste_Centro = millis();
             Serial.print("sensor 00 Minutos Centro");
             Serial.println();
             }
      else if (valBotoes_Centro < 60) // ....................................... 15 Minutos
             {
             estadoBotao_Centro(15);
             ultima_Posicao_Centro = 15;
             tempo_auto_Ajuste_Centro = millis();
             Serial.print("sensor 15 Minutos Centro");
             Serial.println();
             }
      else // ..................................................................... RESET
           {
           estadoBotao_Centro(Botao_Reset);
           
           }
       }

 void estadoBotao_Bairro   (int botao_Bairro) 
      {  
           if (botao_Bairro != Botao_Reset) //.......................Quando um botao estiver apertado
           {                            
                     Serial.println(botao_Bairro);
             }
           if ((millis() - delayBotao_Bairro) > tempoDebounce_Bairro) //..Botao for apertado ou solto
           {  
                    if ((botao_Bairro != Botao_Reset) && (estadoBotaoAnt_Bairro == Botao_Reset) ) 
                    {
                          //botaoApertado_Bairro(botao_Bairro); 
                          delayBotao_Bairro = millis();
                     }
                   
                    if ((botao_Bairro == Botao_Reset) && (estadoBotaoAnt_Bairro != Botao_Reset) ) 
                    {
                         // botaoSolto_Bairro(estadoBotaoAnt_Bairro); 
                          delayBotao_Bairro = millis();
                     }
            }
           estadoBotaoAnt_Bairro = botao_Bairro;
        } 

 void estadoBotao_Centro(int botao_Centro) 
       {                             
           if (botao_Centro != Botao_Reset) //..Quando um botao estiver apertado
           {                           
                     Serial.println(botao_Centro);
            }
          
           if ((millis() - delayBotao_Centro) > tempoDebounce_Centro) //..Quando o botao for apertado ou solto 
           { 
                 if ((botao_Centro != Botao_Reset) && (estadoBotaoAnt_Centro == Botao_Reset) ) 
                 {
                          //botaoApertado_Centro(botao_Centro); 
                          delayBotao_Centro = millis();
                  }
                 if ((botao_Centro == Botao_Reset) && (estadoBotaoAnt_Centro != Botao_Reset) ) 
                 {
                          //botaoSolto_Centro(estadoBotaoAnt_Centro); 
                          delayBotao_Centro = millis();
                  }
            }
           estadoBotaoAnt_Centro = botao_Centro;
         }
 
/*

 void botaoApertado_Bairro (int botao_Bairro) 
      {
         //contador_Bairro++;
         //Serial.print(descBotao_Bairro[botao_Bairro]);
         //Serial.print(contador_Bairro);
         //Serial.print("apertado");
       }
 
 void botaoSolto_Bairro    (int botao_Bairro) 
   //   {
         //Serial.print(descBotao_Bairro[botao_Bairro]);
         //Serial.print(contador_Bairro);
         //Serial.print("solto");
     //  }
 
 void botaoApertado_Centro (int botao_Centro) 
      {
         //contador_Centro++; 
         //Serial.print(descBotao_Centro[botao_Centro]);
         //Serial.print(contador_Centro);
         //Serial.print("apertado");
       }
 void botaoSolto_Centro    (int botao_Centro) 
      {
        //Serial.print(descBotao_Centro[botao_Centro]);
        //Serial.print(contador_Centro);
        //Serial.print("solto");
       }
*/ 
