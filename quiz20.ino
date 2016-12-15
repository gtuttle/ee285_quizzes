//EE 285 - quiz 20
//12/2/2016

int ledPin = 12;
int i;

void setup() {
  
  pinMode( ledPin, OUTPUT);        //Set the ledPin to be an output

}

void loop() {
  
  for(i = 0; i < 5; i++){           //a burst of 5 flashes
    
    digitalWrite( ledPin, HIGH);    //turn it on
    delay( 250 );                   //on delay
    digitalWrite( ledPin, LOW);     //turn it off
    delay( 250 );                   //off delay
  }
  
  delay( 2750 );                    //longer delay between bursts
}
