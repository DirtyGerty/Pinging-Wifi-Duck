void LEDUpdate()

//ip1_Name = ("wifi AP");
//ip2_Name = ("PiHole");
//ip3_Name = ("Router");
//ip4_Name = ("Public DNS");

{


if((ip1_Status == false) && (ip2_Status == false) && (ip3_Status == false) && (ip4_Status == false)){LEDColour = 5;} // 0000
if((ip1_Status == false) && (ip2_Status == false) && (ip3_Status == false) && (ip4_Status == true)){LEDColour = 5;}  // 0001
if((ip1_Status == false) && (ip2_Status == false) && (ip3_Status == true) && (ip4_Status == false)){LEDColour = 5;}  // 0010
if((ip1_Status == false) && (ip2_Status == false) && (ip3_Status == true) && (ip4_Status == true)){LEDColour = 5;}   // 0011                                                                                     
  
if((ip1_Status == false) && (ip2_Status == true) && (ip3_Status == false) && (ip4_Status == false)){LEDColour = 5;}  // 0100
if((ip1_Status == false) && (ip2_Status == true) && (ip3_Status == false) && (ip4_Status == true)){LEDColour = 5;}   // 0101
if((ip1_Status == false) && (ip2_Status == true) && (ip3_Status == true) && (ip4_Status == false)){LEDColour = 5;}   // 0110
if((ip1_Status == false) && (ip2_Status == true) && (ip3_Status == true) && (ip4_Status == true)){LEDColour = 5;}    // 0111

if((ip1_Status == true) && (ip2_Status == false) && (ip3_Status == false) && (ip4_Status == false)){LEDColour = 3;}  // 1000
if((ip1_Status == true) && (ip2_Status == false) && (ip3_Status == false) && (ip4_Status == true)){LEDColour = 3;}   // 1001
if((ip1_Status == true) && (ip2_Status == false) && (ip3_Status == true) && (ip4_Status == false)){LEDColour = 3;}   // 1010
if((ip1_Status == true) && (ip2_Status == false) && (ip3_Status == true) && (ip4_Status == true)){LEDColour = 3;}    // 1011

if((ip1_Status == true) && (ip2_Status == true) && (ip3_Status == false) && (ip4_Status == false)){LEDColour = 1;}   // 1100
if((ip1_Status == true) && (ip2_Status == true) && (ip3_Status == false) && (ip4_Status == true)){LEDColour = 1;}    // 1101
if((ip1_Status == true) && (ip2_Status == true) && (ip3_Status == true) && (ip4_Status == false)){LEDColour = 4;}    // 1110
if((ip1_Status == true) && (ip2_Status == true) && (ip3_Status == true) && (ip4_Status == true)){LEDColour = 8;}     // 1111
                                                                                     
                                                                                     

// Update the LED Colour                                                                                     
// Off 
                                                                                 
  if(LEDColour == 0){
                     pixels.setPixelColor(0, pixels.Color(0, 0, 0));
                     pixels.show(); 
                     }                                                                                   
// Red                                                                                   
  if(LEDColour == 1){
                     pixels.setPixelColor(0, pixels.Color(255, 0, 0));
                     pixels.show(); 
                     }
// Green                   
  if(LEDColour == 2){
                     
                     pixels.setPixelColor(0, pixels.Color(0, 255, 0));
                     pixels.show(); 
                     }
//Blue                                                                                   
  if(LEDColour == 3){
                     pixels.setPixelColor(0, pixels.Color(0, 0, 255));
                     pixels.show(); 
                     }
//Yellow                   
  if(LEDColour == 4){
                     pixels.setPixelColor(0, pixels.Color(255, 255, 0));
                     pixels.show(); 
                     }
//Purple                                                                                   
  if(LEDColour == 5){
                     pixels.setPixelColor(0, pixels.Color(255, 0, 255));
                     pixels.show(); 
                     }
//Cyan                   
  if(LEDColour == 6){
                     pixels.setPixelColor(0, pixels.Color(0, 255, 255));
                     pixels.show(); 
                     }  
//White                   
  if(LEDColour == 7){
                     pixels.setPixelColor(0, pixels.Color(255, 255, 255));
                     pixels.show(); 
                     } 
// FadingGreen                   
  if(LEDColour == 8){                    
                     pixels.setPixelColor(0, pixels.Color(0, Brightness, 0));
                     pixels.show(); 
                     }                                                                                                                                                                                     
}
