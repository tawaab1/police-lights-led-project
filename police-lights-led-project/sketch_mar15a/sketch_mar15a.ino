/*
 * Name: Aisea
 * Project: Police Lights LED project
 * Date: 15/03/2019
 * Purpose: Create variation of blinking lights of a police car
 */
void setup() {
  
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
  
  firstLoop();
  secondLoop();
  thirdLoop();
}

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
