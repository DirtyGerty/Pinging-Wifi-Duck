void Ping_IP2()
{                                                  
  Serial.println();
  Serial.println("-----------------Pinging IP 2-----------------");
  
  Serial.print("Pinging ip ");
  Serial.println(remote_ip2);

  if(Ping.ping(remote_ip2)) {
    Serial.println("Success!!");
    ip2_Status = true;
  } else {
    Serial.println("Error :(");
    ip2_Status = false;
  }
  
   Serial.println("-----------------End of Ping-----------------");
   Serial.println();
   
}  
