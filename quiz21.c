// EE 285 - quiz 21

#include <stdio.h>

void invertAndNegateArray( double[], int );   //Or double*, either way is fine for a pointer

int main( void ){
   
   const int SIZE = 6;
   double dubArray[SIZE] = {13, -20, 0.125, -0.6667, 9, 1};
   int i;
   
   invertAndNegateArray( dubArray, SIZE );
   
   for(i = 0; i < SIZE; i++)
      printf( "%6.3lf, ", dubArray[i] );
   
   printf( "\n\n" );
   
   return 0;
}

void invertAndNegateArray( double a[], int s ){
   
   int i;
   
   for( i = 0; i < s; i++ )
      a[i] = -1/a[i];
}

/*Output
 
 -0.077,  0.050, -8.000,  1.500, -0.111, -1.000,
 
 Program ended with exit code: 0
 
 */
 
