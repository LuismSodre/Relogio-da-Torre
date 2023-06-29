 void SENSOR_DE_TEMPERATURA_E_UMIDADE_DO_AR()
      {
                     Serial.println();
                     //Serial.println("Status,\tTempo(uS),\tUmidade(%),\tTemperatura(°C)");
           if ( (millis() - delayIntervalo) > intervalo ) 
           {
                     //LEITURA DOS DADOS
                     unsigned long start = micros();
                     int chk = sensorDHT.read22(pinSensor);
                     unsigned long stop = micros();
                            
                   switch (chk)  // VERIFICA SE HOUVE ERRO
                                 {
                            case DHTLIB_OK:
                                 //Serial.print("OK,\t");
                                 Serial.println("");
                                 break;
                            case DHTLIB_ERROR_CHECKSUM:
                                 Serial.print("Erro de Checagem,\t");
                                 break;
                            case DHTLIB_ERROR_TIMEOUT:
                                 Serial.print("Erro de tempo limite,\t");
                                 break;
                            case DHTLIB_ERROR_CONNECT:
                                 Serial.print("erro de conexão,\t");
                                 break;
                            case DHTLIB_ERROR_ACK_L:
                                 Serial.print("Erro de reconhecimento baixo,\t");
                                 break;
                            case DHTLIB_ERROR_ACK_H:
                                 Serial.print("Erro de reconhecimento alto,\t");
                                 break;
                                 default:
                                 Serial.print("Erro desconhecido,\t");
                                 break;
                             }





  //==== INICIO DA EXIBIÇÃO DOS DADOS LIDOS SENSOR DE TEMPERATURA ===================================
       
                     //Serial.print(stop - start);
                     //Serial.print(" Ms\t\t");
                     lcd.setCursor(0,1);
                     lcd.print("U:");
                     lcd.print(sensorDHT.humidity, 1 /*FORMATAÇÃO PARA UMA CASA DECIMAL*/);
                     lcd.print("%");
                     //Serial.print(sensorDHT.humidity, 1 /*FORMATAÇÃO PARA UMA CASA DECIMAL*/);
                     //Serial.print(" %\t\t");
                     //Serial.println(sensorDHT.temperature, 1 /*FORMATAÇÃO PARA UMA CASA DECIMAL*/);
                     lcd.setCursor(8,1);
                     lcd.print("T:");
                     lcd.println(sensorDHT.temperature, 1 /*FORMATAÇÃO PARA UMA CASA DECIMAL*/);
                     lcd.setCursor(14,1);
                     lcd.write(1);
                     lcd.print("C");
                     delayIntervalo = millis();
        };                                 
        }

