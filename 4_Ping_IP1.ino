void Ping_IP1()
{                                                 
  Serial.println();
  Serial.println("-----------------Pinging IP 1-----------------");
  
  Serial.print("Pinging ip ");
  Serial.println(remote_ip1);

  if(Ping.ping(remote_ip1)) {
    Serial.println("Success!!");
    ip1_Status = true;
  } else {
    Serial.println("Error :(");
    ip1_Status = false;
  }
  //Serial.println();
  //Serial.print(ip1_Name);
  //Serial.print(" Status :");
  //Serial.println(ip1_Status);
  
  //Serial.print(ip2_Name);
  //Serial.print(" Status :");
  //Serial.println(ip2_Status);
  
  //Serial.print(ip3_Name);
  //Serial.print(" Status :");
  //Serial.println(ip3_Status);
  
  //Serial.print(ip4_Name);
  //Serial.print(" Status :");
  //Serial.println(ip4_Status);
  //Serial.println();
  
  Serial.println("-----------------End of Ping-----------------");
  Serial.println();
}  

 
