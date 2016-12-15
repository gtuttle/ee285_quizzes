//EE 285 - quiz 22
//12/7/2016

int tempPin = 0;              //Analog input 0 for temp. sensor
int greenLedPin = 4;
int yellowLedPin = 5;
int redLedPin = 6;
int tempReading;
double temp;

void setup() {
  
  pinMode( greenLedPin, OUTPUT);        //Set the LED pin outputs
  pinMode( yellowLedPin, OUTPUT);
  pinMode( redLedPin, OUTPUT);
  
  digitalWrite( greenLedPin, LOW );     //Turn off all LEDs initally
  digitalWrite( yellowLedPin, LOW );
  digitalWrite( redLedPin, LOW );
}

void loop() {
  
  tempReading = analogRead( tempPin );
  temp = 20.0*5.0*tempReading/1023.0;      //Convert to actual temperature
  
  if( temp <= 50 ){
    
    digitalWrite(greenLedPin, HIGH );
    digitalWrite(yellowLedPin, LOW );
    digitalWrite(redLedPin, LOW );
  }
  else if (temp > 50 && temp <= 80 ){
    
    digitalWrite(greenLedPin, LOW );
    digitalWrite(yellowLedPin, HIGH );
    digitalWrite(redLedPin, LOW );
  }
  else{
    digitalWrite(greenLedPin, LOW );
    digitalWrite(yellowLedPin, LOW );
    digitalWrite(redLedPin, HIGH );
  }
  
  delay( 1000 );
}
