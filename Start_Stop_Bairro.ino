  void Starte_Sensor_Bairro() 
       {
             int Sensor_Start_Bairro = 0;
  
             if(digitalRead(Sensor_Bairro))
             { //....LIGADO
                  Sensor_Start_Bairro = 1;
                  Serial.println("botão solto_Bairro");
              }
             if(!digitalRead(Sensor_Bairro))
             { //....DESLIGADO
                  Sensor_Start_Bairro = 0;
                  Serial.println("botão apertado_Bairro");
              }
             if(myRTC.seconds == 00)
             { //....LIGADO
                  Sensor_Start_Bairro = 1;
                  Serial.println("ZERO_Bairro");
                                  
                  if(Sensor_Start_Bairro)
                  {
                      Serial.println("botão apertado Start_Bairro");
                      pinMode(Avanco_Bairro_1, HIGH);
                      pinMode(STOP_Bairro_2, HIGH);
                      pinMode(Freio_Bairro_3, HIGH);
                      pinMode(RETORNO_Bairro_4,LOW);
                      delay(2000);
                      Sensor_Start_Bairro = 1;
                   }
               }
             if(!Sensor_Start_Bairro)
             {
                  int Tempo_StopB = 0;
                  Tempo_StopB = millis();
                  Sensor_Start_Bairro = 1;
                  if(millis() - Tempo_StopB >= 1000)
                  { 
                      Serial.println("Motor parado_Bairro");
                      pinMode(Avanco_Bairro_1, LOW);
                      pinMode(STOP_Bairro_2, LOW);
                      pinMode(Freio_Bairro_3, LOW);
                      pinMode(RETORNO_Bairro_4,LOW);
                      Sensor_Start_Bairro = 0;  
                   }
  
              }
         }