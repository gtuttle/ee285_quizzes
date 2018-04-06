//EE 285 - quiz 25

#include <stdio.h>

struct somePerson{
   
   char gender;   //female (‘f’) or male (‘m’)
   int age;       //age in years
   int height;    //height in inches
   int weight;    //weight in pounds
};

void printPerson( struct somePerson );

int main( void ) {
   
   struct somePerson casey = { 'f', 23, 64, 110 };
   struct somePerson pat = { 'm', 26, 71, 180 };
   struct somePerson jess = { 'f', 20, 67, 135 };
   
   printPerson( pat );
}

   //Add your function definition here.

void printPerson( struct somePerson somebody ){
   
   printf("The person is " );
   if( somebody.gender == 'f')
      printf( "female.\n" );
   else
      printf( "male.\n" );
   
   printf( "Their age is %d years.\n", somebody.age );
   printf( "Their height is %d inches.\n", somebody.height );
   printf( "Their weight is %d pounds.\n\n", somebody.weight );
}

/* Output
 The person is male.
 Their age is 26 years.
 Their height is 71 inches.
 Their weight is 180 pounds.
 
 Program ended with exit code: 0 */

