 void RELOGIO_EM_MODO_PROGRAMACAO(){
          Serial.println(" Relógio em modo Ajuste Manual ");
            
          Avanco_Bairro();
          if(ligado_1)
          {
               digitalWrite(Avanco_Bairro_1,1);
           }
          else
          {
               digitalWrite(Avanco_Bairro_1,0);
               lcd.clear();
               lcd.setCursor(0,0);
               lcd.print("Relogio Bairro ");
               lcd.setCursor(0,1);
               lcd.print("Avancar Ativado");
               delay(1000);
           }

          Retorno_Bairro();
          if(ligado_2)
          {
               digitalWrite(RETORNO_Bairro_4,1);
           }
          else
          {
               digitalWrite(RETORNO_Bairro_4,0);
               lcd.clear();
               lcd.setCursor(0,0);
               lcd.print("Relogio Bairro ");
               lcd.setCursor(0,1);
               lcd.print("Voltar Ativado  ");
               delay(1000);
           }
          Avanco_Centro();
          if(ligado_3)
          {
                digitalWrite(Avanco_Centro_5,1);
           }
          else
          {
                digitalWrite(Avanco_Centro_5,0);
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("Relogio Centro ");
                lcd.setCursor(0,1);
                lcd.print("Avancar Ativado");
                delay(100);
           }



          Retorno_Centro();
          if(ligado_4)
          {
                digitalWrite(RETORNO_Centro_8,1);
           }
          else
          {
                digitalWrite(RETORNO_Centro_8,0);
                lcd.clear();
                lcd.setCursor(0,0);
                lcd.print("Relogio Centro ");
                lcd.setCursor(0,1);
                lcd.print("Voltar Ativado  ");
                delay(1000);
           }                            
       }//==== FIM DO MODO PROGRAMAÇÃO ====

