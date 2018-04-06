// EE 285 - quiz 24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct someGuy{
   int age, height, weight;
};

int main( void ) {
   
   struct someGuy aBunchOfGuys[10];
   int i;
   double avgAge;
   
   srand( (int)time(0) );
   
   //intitalze the members of the struct with random values
   for( i = 0; i < 10; i++ ){
      aBunchOfGuys[i].age = rand()%46 + 20;        //Age 20 to 65
      aBunchOfGuys[i].height = rand()%21 + 60;     //5 ft 0 in to 6 ft 8 in
      aBunchOfGuys[i].weight = rand()%181 + 120;   //120 lb to 300 lb
   }
   
   //If desired, we could print out the values, just to see what they are.
   /*
    for( i = 0; i < 10; i++ ){
       printf( "Guy %d: age = %d, ", i, aBunchOfGuys[i].age);
       printf( "height = %d in, ", aBunchOfGuys[i].height );
       printf( "and weight = %d.\n", aBunchOfGuys[i].weight );
   }
   printf( "\n" );
   */

   
   avgAge = 0;
   for( i = 0; i < 10; i++ ){
      avgAge = avgAge + aBunchOfGuys[i].age;
   }
   
   printf( "The average age for the bunch of guys is %5.2lf.\n\n", avgAge/10.0 );

   return 0;
}

/*Output
 The average age for the bunch of guys is 49.50.
 
 Program ended with exit code: 0
 */
