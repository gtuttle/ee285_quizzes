//EE 285 - quiz 21
//12/5/2016

int switchPin = 3;
int switchInput = HIGH;
int ledPin = 4;
int i;

void setup() {
  
  pinMode( switchPin, INPUT );     //Set the switchPin as an input
  pinMode( ledPin, OUTPUT);        //Set the ledPin to be an output

}

void loop() {
  
  switchInput = digitalRead( switchPin );
  
  if( switchPin == LOW ){
    for(i = 0; i < 5; i++){           //a burst of 5 flashes
      
      digitalWrite( ledPin, HIGH);    //turn it on
      delay( 250 );                   //on delay
      digitalWrite( ledPin, LOW);     //turn it off
      delay( 250 );                   //off delay
    }
  }
}
