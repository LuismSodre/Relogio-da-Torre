  void Starte_Sensor_Centro() 
       {
             int Sensor_Start_Centro = 0;
  
             if(digitalRead(Sensor_Centro))
             { //....LIGADO
                  Sensor_Start_Centro = 1;
                  Serial.println("botão solto_Centro");
              }
             if(!digitalRead(Sensor_Centro))
             { //....DESLIGADO
                  Sensor_Start_Centro = 0;
                  Serial.println("botão apertado_Centro");
              }
             if(myRTC.seconds == 00)
             { //....LIGADO
                  Sensor_Start_Centro = 1;
                  Serial.println("ZERO_Centro");
                                  
                  if(Sensor_Start_Centro)
                  {
                       Serial.println("botão apertado Start_Centro");
                       pinMode(Avanco_Centro_5, HIGH);
                       pinMode(STOP_Centro_6, HIGH);
                       pinMode(Freio_Centro_7, HIGH);
                       pinMode(RETORNO_Centro_8,LOW);
                       delay(2000);
                       Sensor_Start_Centro = 1;
                    }
               }
             if(!Sensor_Start_Centro)
             {
                  int Tempo_StopB = 0;
                  Tempo_StopB = millis();
                  Sensor_Start_Centro = 1;
                  if(millis() - Tempo_StopB >= 1000)
                  { 
                       Serial.println("Motor parado_Centro");
                       pinMode(Avanco_Centro_5, LOW);
                       pinMode(STOP_Centro_6, LOW);
                       pinMode(Freio_Centro_7, LOW);
                       pinMode(RETORNO_Centro_8,LOW);
                       Sensor_Start_Centro = 0;  
                    }
  
              }
         }