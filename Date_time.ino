void Date_time(){
  // INICIALIZAÇÃO DO DATETIME ====================================================================

        Serial.print("compiled: ");
        Serial.print(__DATE__);
        Serial.println(__TIME__);

        //Rtc.Begin();
     
        RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
        printDateTime(compiled);
        Serial.println();


  // CONDIÇÕES DE FUNCIONAMENTO DO TIMER ==========================================================

     if (!Rtc.IsDateTimeValid()) 
    {
        // Causas comuns:
        // 1) primeira vez que você correu e o dispositivo ainda não estava rodando
        // 2) a bateria do dispositivo está fraca ou até mesmo ausente

        Serial.println("RTC perdeu a confiança no DateTime!");
        Rtc.SetDateTime(compiled);
     }

    if (Rtc.GetIsWriteProtected())
    {
        Serial.println("RTC foi protegido contra gravação, permitindo a gravação agora");
        Rtc.SetIsWriteProtected(false);
     }

    if (!Rtc.GetIsRunning())
    {
        Serial.println("RTC não estava funcionando ativamente, começando agora");
        Rtc.SetIsRunning(true);
     }

      RtcDateTime now = Rtc.GetDateTime();
    if (now < compiled) 
    {
        Serial.println("RTC é mais antigo que o tempo de compilação! (Atualizando DateTime)");
        Rtc.SetDateTime(compiled);
     }
    else if (now > compiled) 
    {
        Serial.println("RTC é mais recente que o tempo de compilação. (isso é esperado)");
     }
    else if (now == compiled) 
    {
        Serial.println("RTC é o mesmo que tempo de compilação! (não esperado, mas está tudo bem)");
     }
        }

    void printDateTime(const RtcDateTime& dt)
     {
            char datestring[20];

            snprintf_P(datestring, 
            countof(datestring),
            //    Dia / Mês/ Ano Hora:Minu:Seg
            PSTR("%02u/%02u/%04u %02u:%02u:%02u"),
            dt.Day(),     // Dia
            dt.Month(),   // Mês
            dt.Year(),    // Ano
            dt.Hour(),    // Horas
            dt.Minute(),  // Minutos
            dt.Second() );// Segundos
            Serial.print(datestring);
            lcd.print(datestring);
      }
