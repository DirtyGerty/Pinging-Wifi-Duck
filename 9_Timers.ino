void Timers(){

   
   if(millis()- MilliSecond > 99){ 
                                    
                                   if(Brightness_Dir == true){ Brightness = Brightness + 5;
                                                              if(Brightness > 253){Brightness = 255;
                                                                                   Brightness_Dir = false;}
                                                              }
                                   if(Brightness_Dir == false){Brightness = Brightness - 5;
                                                            if(Brightness < 120){Brightness = 120;
                                                                                Brightness_Dir = true;}
                                                              }
                                   
                                   LEDUpdate();
                                   MilliSecond = millis(); 
                                  }
                                   
   if(millis()- Second > 999)    { 
                                   Internal_PingCounter = Internal_PingCounter + 1;
                                   External_PingCounter = External_PingCounter + 1;
                                   Second = millis();
                                  }

                                  
   if(millis()- Minute > 59999)    { 
                                                                                                        
                                   Minute = millis(); 
                                  }

                                  
}
