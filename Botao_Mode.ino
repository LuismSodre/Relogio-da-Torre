 void CONDICAO_DO_BOTAO_MODE()
      {
                               if(digitalRead(Botao_Mode))
                               { //.......................................LIGADO
                                    Botao_Mode_Desligado = true;
                                }
                               if(!digitalRead(Botao_Mode))
                               { //.......................................DESLIGADO
                                     Botao_Mode_Desligado = false;
                                }
                               if(Botao_Mode_Desligado)  
                               { //-------------------------------------- MODO DESLIGADO
                                     RELOGIO_EM_MODO_NORMAL();       
                                }
                               else  
                               { //-------------------------------------- MODO LIGADO
                                     RELOGIO_EM_MODO_PROGRAMACAO();  
                                }
  
       }