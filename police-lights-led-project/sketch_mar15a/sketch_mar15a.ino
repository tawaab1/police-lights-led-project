/*
 * Name: Aisea
 * Project: Police Lights LED project
 * Date: 15/03/2019
 * Purpose: Create variation of blinking lights of a police car
 */
//implementing variables
 int firstKeyPin = 2;
int secondKeyPin = 3;


void setup() {
  //set the button pins as inputs
  pinMode(firstKeyPin, INPUT_PULLUP);
  pinMode(secondKeyPin, INPUT_PULLUP);
  //set up the lights
  pinMode(13, OUTPUT);      // Set pin 13 to output
 pinMode(12, OUTPUT);      // Set pin 12 to output
  pinMode(11, OUTPUT);      // Set pin 11to output
   pinMode(10, OUTPUT);      // Set pin 10 to output
    pinMode(9, OUTPUT);      // Set pin 9 to output
     pinMode(8, OUTPUT);   // set pin 8 as output
      pinMode(7, OUTPUT);   //set pin 7 as output
       pinMode(6, OUTPUT);   //set pin 6 as output
        pinMode(5, OUTPUT);   //set pin 5 as output
         pinMode(4, OUTPUT);   //set pin 4 as output
}


void loop() {
  //first pattern of flashing 
  firstLoop();
  // where I press the red button, it loops the second pattern flashing
  if(digitalRead(firstKeyPin) == LOW){        //if the first key is pressed
    secondLoop(); //run the second loop
  }
  //pressing the green button, it loops the second pattern flashing
  if(digitalRead(secondKeyPin) == LOW){  //if the second key is pressed
    thirdLoop(); //run the third loop
  }
  
  
}
//the first pattern method
void firstLoop()
{
  for(int i = 0; i < 10; i++)
  {
    digitalWrite(13, HIGH);   // Turn on the LED
    digitalWrite(12, HIGH);   // Turn on the LED
      digitalWrite(11, HIGH);   // Turn on the LED
        digitalWrite(10, HIGH);   // Turn on the LED
          digitalWrite(9, HIGH);   // Turn on the LED
  delay (100); //delay

    digitalWrite(13, LOW);   // Turn off the LED
        digitalWrite(12, LOW);   // Turn off the LED
            digitalWrite(11, LOW);   // Turn off the LED
                digitalWrite(10, LOW);   // Turn off the LED
                    digitalWrite(9, LOW);   // Turn off the LED
                    delay(100); //delay

                    digitalWrite(8, HIGH);   // Turn on the LED
                    digitalWrite(7, HIGH);   // Turn on the LED
                    digitalWrite(6, HIGH);   // Turn on the LED
                    digitalWrite(5, HIGH);   // Turn on the LED
                    digitalWrite(4, HIGH);   // Turn on the LED
                    delay(100); //delay

  digitalWrite(8, LOW);   // Turn off the LED
        digitalWrite(7, LOW);   // Turn off the LED
            digitalWrite(6, LOW);   // Turn off the LED
                digitalWrite(5, LOW);   // Turn off the LED
                    digitalWrite(4, LOW);   // Turn off the LED
                     delay (100); //delay
  }
}
//this is the second pattern method
void secondLoop()
{
  for(int i = 0; i <10; i++)
  {
    digitalWrite(13, HIGH);   // Turn on the LED
    digitalWrite(12, HIGH);   // Turn on the LED
      digitalWrite(11, HIGH);   // Turn on the LED
        digitalWrite(10, HIGH);   // Turn on the LED
          digitalWrite(9, HIGH);   // Turn on the LED
          digitalWrite(8, HIGH);   // Turn on the LED
                    digitalWrite(7, HIGH);   // Turn on the LED
                    digitalWrite(6, HIGH);   // Turn on the LED
                    digitalWrite(5, HIGH);   // Turn on the LED
                    digitalWrite(4, HIGH);   // Turn on the LED
                    delay (100);
                    digitalWrite(13, LOW);   // Turn off the LED
        digitalWrite(12, LOW);   // Turn off the LED
            digitalWrite(11, LOW);   // Turn off the LED
                digitalWrite(10, LOW);   // Turn off the LED
                    digitalWrite(9, LOW);   // Turn off the LED
                    digitalWrite(8, LOW);   // Turn off the LED
        digitalWrite(7, LOW);   // Turn off the LED
            digitalWrite(6, LOW);   // Turn off the LED
                digitalWrite(5, LOW);   // Turn off the LED
                    digitalWrite(4, LOW);   // Turn off the LED
                    delay(100);
                    
  }
}
//this is the third pattern method
void thirdLoop()
{
  for(int i = 0; i< 5; i++)
  {
    digitalWrite(13, HIGH);   // Turn on the LED
    digitalWrite(4, HIGH);   // Turn on the LED
    delay(100);
    digitalWrite(13, LOW);   // Turn off the LED
    digitalWrite(4, LOW);   // Turn off the LED
    delay(100);
        
    digitalWrite(12, HIGH);   // Turn on the LED
    digitalWrite(5, HIGH);   // Turn on the LED
    delay(100);
    digitalWrite(12, LOW);   // Turn off the LED
    digitalWrite(5, LOW);   // Turn off the LED
    delay(100);
                    
            
      digitalWrite(11, HIGH);   // Turn on the LED
      digitalWrite(6, HIGH);   // Turn on the LED
      delay(100);
      digitalWrite(11, LOW);   // Turn off the LED
      digitalWrite(6, LOW);   // Turn off the LED
      delay(100);
                
        digitalWrite(10, HIGH);   // Turn on the LED
        digitalWrite(7, HIGH);   // Turn on the LED
        delay(100);
        digitalWrite(10, LOW);   // Turn off the LED
        digitalWrite(7, LOW);   // Turn off the LED
        delay(100);
                    
          digitalWrite(9, HIGH);   // Turn on the LED
          digitalWrite(8, HIGH);   // Turn on the LED
          delay(100);
          digitalWrite(9, LOW);   // Turn off the LED
           digitalWrite(8, LOW);   // Turn off the LED
           delay(100);
           
           //back tracking  

                      digitalWrite(10, HIGH);   // Turn on the LED
        digitalWrite(7, HIGH);   // Turn on the LED
        delay(100);
        digitalWrite(10, LOW);   // Turn off the LED
        digitalWrite(7, LOW);   // Turn off the LED
        delay(100);

                    digitalWrite(11, HIGH);   // Turn on the LED
      digitalWrite(6, HIGH);   // Turn on the LED
      delay(100);
      digitalWrite(11, LOW);   // Turn off the LED
      digitalWrite(6, LOW);   // Turn off the LED
      delay(100);
       digitalWrite(12, HIGH);   // Turn on the LED
    digitalWrite(5, HIGH);   // Turn on the LED
    delay(100);
    digitalWrite(12, LOW);   // Turn off the LED
    digitalWrite(5, LOW);   // Turn off the LED
    delay(100);

  
  }
}
