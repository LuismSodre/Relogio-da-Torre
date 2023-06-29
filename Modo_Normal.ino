 void RELOGIO_EM_MODO_NORMAL(){  
             if((myRTC.hours == 00) && (myRTC.minutes == 00)) // 00:00hs
                    {              
                    AUTO_AJUSTE_00_hS();
                    }
        else if((myRTC.hours ==  3) && (myRTC.minutes == 00)) // 03:00hs
                    {
                    AUTO_AJUSTE_03_hs();
                    }

        else if((myRTC.hours ==  6) && (myRTC.minutes == 00)) // 06:00hs
                    {
                    AUTO_AJUSTE_06_hs();
                    }

        else if((myRTC.hours ==  9) && (myRTC.minutes == 00)) // 09:00hs
                    {
                    AUTO_AJUSTE_09_hs();
                    }

        else if((myRTC.hours == 12) && (myRTC.minutes == 00)) // 12:00hs
                    {
                    AUTO_AJUSTE_00_hS();
                    }

        else if((myRTC.hours == 15) && (myRTC.minutes == 00)) // 15:00hs
                    {
                    AUTO_AJUSTE_03_hs();
                    }

        else if((myRTC.hours == 18) && (myRTC.minutes == 00)) // 18:00hs
                    {
                    AUTO_AJUSTE_06_hs();
                    }        

        else if((myRTC.hours == 21) && (myRTC.minutes == 00)) // 21:00hs
                    {
                    AUTO_AJUSTE_09_hs();
                    }

        else 
            {
          
            //Serial.println("Relógio Ativado "); // Relogio em funcionamento normal
            //Serial.println();
            RtcDateTime now = Rtc.GetDateTime();
            printDateTime(now);
            Serial.println();
            if (!now.IsValid())
                     {
                     // Causas comuns:
                     // 1) a bateria do dispositivo está fraca ou mesmo ausente e a energia foi desconectada!
                     Serial.println("RTC Perdeu a confiança no DateTime!");
                     }

            delay(1000);
            SENSOR_ANALOGICO_DO_BAIRRO();
            SENSOR_ANALOGICO_DO_CENTRO();
            Starte_Sensor_Bairro();
            Starte_Sensor_Centro();
            }  
 
            DS1302();
            SENSOR_DE_TEMPERATURA_E_UMIDADE_DO_AR();
         
            //==== FIM DO MODO DE FUNCIONAMENTO NORMAL DO RELÓGIO ====       
            }