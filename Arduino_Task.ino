//#####################################################//
//***************INTERRUPT_EXAMPLE********************//
//**************Ahmed_Amir_Mohamed*******************//
//******************7/10/2016***********************//
//#################################################//

const byte LED = 13; // Define LED Pin Number
const byte ON = 7; // Define ON Push button Pin number
const byte OFF = 3; // Define OFF push button Pin number

void setup() 
{
pinMode(LED, OUTPUT); // Setting LED pin as O/P
pinMode(ON, INPUT_PULLUP); // Setting ON push button as I/P
pinMode(OFF, INPUT_PULLUP); // Setting OFF push button as I/P
attachInterrupt(digitalPinToInterrupt(OFF), SHUTDOWN , FALLING);
// Enable Interrupt on PIN No.3 with Interrupt service routine to shotdown the LED when a falling edge has happened
}

void loop() 
{
  if (digitalRead (ON)==LOW)
  {
  digitalWrite(LED,HIGH);
  delay (5000);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}

void SHUTDOWN()
{
  digitalWrite(LED, LOW);
}
