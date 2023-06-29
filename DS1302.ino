 void DS1302(){

       myRTC.updateTime();         //faz leitura do DS1302

       //==== IMPRIME AS INFORMAÇÕES DE HORA E DATA NO LCD =============================

       lcd.setCursor(0,0);

  if(myRTC.dayofmonth < 10) lcd.print("0");
       
       lcd.print(myRTC.dayofmonth);
       lcd.print("/");

  if(myRTC.month < 10) lcd.print("0");
       
       lcd.print(myRTC.month);
       lcd.print("/");
       lcd.print(myRTC.year);
       lcd.print(" ");

  if(myRTC.hours < 10) lcd.print("0");
       
       lcd.print(myRTC.hours);
       lcd.print(":");

  if(myRTC.minutes < 10) lcd.print("0");
       
       lcd.print(myRTC.minutes);
  
      } 

 
 void week(int dayW){
  
  switch(dayW)
    {
    case 1: Serial.print("Dom"); break;
    case 2: Serial.print("Seg"); break;
    case 3: Serial.print("Ter"); break;
    case 4: Serial.print("Qua"); break;
    case 5: Serial.print("Qui"); break;
    case 6: Serial.print("Sex"); break;
    case 7: Serial.print("Sab"); break;
   
    } //Fim switch
  
  } //Fim week
