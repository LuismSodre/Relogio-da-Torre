 void Avanco_Bairro()
      {
      if(digitalRead(b1))
      {
              ligado_1 = true;
              lcd.clear();
              lcd.setCursor(0,0);
              lcd.print("Aguardando");
              lcd.setCursor(0,1);
              lcd.print("comando");
              delay(300);
      }
      else
      {
              ligado_1 = false;
       }
       } 
 
 
 void Retorno_Bairro()
      {
      if(digitalRead(b2))
      {
              ligado_2 = true;
              lcd.clear();
              lcd.setCursor(0,0);
              lcd.print("Aguardando");
              lcd.setCursor(0,1);
              lcd.print("comando");
              delay(300); 
      }
      else
      {
              ligado_2 = false;
       }
       }
 void Avanco_Centro()
      {
      if(digitalRead(b3))
      {
              
              ligado_3 = true;
              lcd.clear();
              lcd.setCursor(0,0);
              lcd.print("Aguardando");
              lcd.setCursor(0,1);
              lcd.print("comando");
              delay(300);
      }
      else
      {
              ligado_3 = false;
       }
       }
 void Retorno_Centro()
      {                        
      if(digitalRead(b4))
      {
             ligado_4 = true;
             lcd.clear();
             lcd.setCursor(0,0);
             lcd.print("Aguardando");
             lcd.setCursor(0,1);
             lcd.print("comando");
             delay(300);
      }
      else
      {
             ligado_4 = false;
       }
       }