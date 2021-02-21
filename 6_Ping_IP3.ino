void Ping_IP3()
{
  Serial.println();
  Serial.println("-----------------Pinging IP 3-----------------");
  
  Serial.print("Pinging ip ");
  Serial.println(remote_ip3);

  if(Ping.ping(remote_ip3)) {
    Serial.println("Success!!");
    ip3_Status = true;
  } else {
    Serial.println("Error :(");
    ip3_Status = false;
  }

   Serial.println("-----------------End of Ping-----------------");
   Serial.println();
  
}  
