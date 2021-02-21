void Ping_IP4()
{
  Serial.println();
  Serial.println("-----------------Pinging IP 4-----------------");
  
  Serial.print("Pinging ip ");
  Serial.println(remote_ip4);

  if(Ping.ping(remote_ip4)) {
    Serial.println("Success!!");
    ip4_Status = true;
  } else {
    Serial.println("Error :(");
    ip4_Status = false;
  }
   Serial.println("-----------------End of Ping-----------------");
   Serial.println(); 
   
}   
