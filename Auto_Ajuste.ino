void AUTO_AJUSTE_00_hS(){
 // ===================== Bairro ======================
                          if(ultima_Posicao_Bairro == 45)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Bairro_1, HIGH);
                                    pinMode(STOP_Bairro_2, HIGH);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 00);                           
                                    }
                           else if(ultima_Posicao_Bairro == 00){
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 15)
                                    {
                                    do
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,HIGH);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 00);
                                          } 
                           else if(ultima_Posicao_Bairro == 00)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 00)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }
                                    
                 
                  

 // ===================== Centro ======================
                          if(ultima_Posicao_Centro == 45)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, HIGH);
                                    pinMode(STOP_Centro_6, HIGH);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 00);                           
                                    }
                            else if(ultima_Posicao_Centro == 00)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 15)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,HIGH);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 00);
                                    } 
                            else if(ultima_Posicao_Centro == 00)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 00)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }
                                    }

void AUTO_AJUSTE_03_hs(){
 // ===================== Bairro ======================
                          if(ultima_Posicao_Bairro == 00)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Bairro_1, HIGH);
                                    pinMode(STOP_Bairro_2, HIGH);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 15);                           
                                    }
                            else if(ultima_Posicao_Bairro == 15){
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 30)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,HIGH);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 15);
                                          } 
                            else if(ultima_Posicao_Bairro == 15)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 15)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }
                                    
                 
                  

 // ===================== Centro ======================
                          if(ultima_Posicao_Centro == 00)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, HIGH);
                                    pinMode(STOP_Centro_6, HIGH);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 15);                           
                                    }
                           else if(ultima_Posicao_Centro == 15)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 30)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,HIGH);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 15);
                                    } 
                              else if(ultima_Posicao_Centro == 15)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 15)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }
                                    }          

void AUTO_AJUSTE_06_hs(){
 // ===================== Bairro ======================
                          if(ultima_Posicao_Bairro == 15)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Bairro_1, HIGH);
                                    pinMode(STOP_Bairro_2, HIGH);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 30);                           
                                    }
                            else if(ultima_Posicao_Bairro == 30){
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 45)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,HIGH);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 30);
                                          } 
                            else if(ultima_Posicao_Bairro == 30)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 30)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }
                                    
                 
                  

 // ===================== Centro ======================
                          if(ultima_Posicao_Centro == 15)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, HIGH);
                                    pinMode(STOP_Centro_6, HIGH);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 30);                           
                                    }
                           else if(ultima_Posicao_Centro == 30)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 45)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,HIGH);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 30);
                                    } 
                              else if(ultima_Posicao_Centro == 30)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 30)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }
                                    }                                     

void AUTO_AJUSTE_09_hs(){
 // ===================== Bairro ======================
                          if(ultima_Posicao_Bairro == 30)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Bairro_1, HIGH);
                                    pinMode(STOP_Bairro_2, HIGH);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 45);                           
                                    }
                            else if(ultima_Posicao_Bairro == 45){
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 00)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, HIGH);
                                    pinMode(RETORNO_Bairro_4,HIGH);
                                    Serial.print("Avançando o Bairro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Bairro == 45);
                                          } 
                            else if(ultima_Posicao_Bairro == 45)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Bairro == 45)
                                    {
                                    pinMode(Avanco_Bairro_1, LOW);
                                    pinMode(STOP_Bairro_2, LOW);
                                    pinMode(Freio_Bairro_3, LOW);
                                    pinMode(RETORNO_Bairro_4,LOW);
                                    Serial.print("Bairro Stop");
                                    Serial.println();
                                    }
                                    
                 
                  

 // ===================== Centro ======================
                          if(ultima_Posicao_Centro == 30)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, HIGH);
                                    pinMode(STOP_Centro_6, HIGH);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 45);                           
                                    }
                           else if(ultima_Posicao_Centro == 45)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 00)
                                    {
                                do
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, HIGH);
                                    pinMode(RETORNO_Centro_8,HIGH);
                                    Serial.print("Avançando o Centro");
                                    Serial.println();
                                    }
                                while(ultima_Posicao_Centro == 45);
                                    } 
                              else if(ultima_Posicao_Centro == 45)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }

                          if(ultima_Posicao_Centro == 45)
                                    {
                                    pinMode(Avanco_Centro_5, LOW);
                                    pinMode(STOP_Centro_6, LOW);
                                    pinMode(Freio_Centro_7, LOW);
                                    pinMode(RETORNO_Centro_8,LOW);
                                    Serial.print("Centro Stop");
                                    Serial.println();
                                    }
                                    }                                     