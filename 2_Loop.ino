void loop(){
  if (WiFi.status() != WL_CONNECTED) {ESP.restart();}
  
  html();
  Timers();
  
  if(Internal_PingCounter > Internal_Ping_Delay ){
                         Ping_IP1();
                         Timers();
                         Ping_IP2();
                         Timers();
                         Ping_IP3();
                         
                         Serial.println("-------Status of Devices-------");
                         Serial.print(ip1_Name);
                         Serial.print(remote_ip1);
                         Serial.print(" Status :");
                         Serial.println(ip1_Status);
  
                         Serial.print(ip2_Name);
                         Serial.print(remote_ip2);
                         Serial.print(" Status :");
                         Serial.println(ip2_Status);
  
                         Serial.print(ip3_Name);
                         Serial.print(remote_ip3);
                         Serial.print(" Status :");
                         Serial.println(ip3_Status);
  
                         Serial.print(ip4_Name);
                         Serial.print(remote_ip4);
                         Serial.print(" Status :");
                         Serial.println(ip4_Status);
                         Serial.println("-------------------------------");
                         
                         Internal_PingCounter = 0;
                         }
  
  if(External_PingCounter > External_Ping_Delay ){
                         
                         Ping_IP4();
                         External_PingCounter = 0;                         
                         }                        
                                                                    
}
