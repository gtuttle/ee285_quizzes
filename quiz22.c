// EE 285 - quiz 22

#include <stdio.h>

int countTheOs( char[] );    // or char*

int main( void ) {
   
   char str[] = "Now is the time for all good men to come to the aid of their country.";
   int numberOfOs;
   
   numberOfOs = countTheOs( str );  //Remember, str is a pointer to the first element of the string.
   
   printf( "The number of o's is: %d.\n\n", numberOfOs );
   
   return 0;
}

int countTheOs( char s[] ){
   
   int i = 0, count = 0;
   
   while( s[i] != '\0' ){       //step through the string until you hit the "0" at the end.
      if( s[i] == 'o' ){        //if the string element happens to be a 'o', count it.
         count++;
      }
      i++;
   }
   
   return count;               //then return the final value of count
}

/*Output
 
 The number of o's is: 9.
 
 Program ended with exit code: 0
 
 */

/*Alternative for the while loop
 
 while( s[i] != '\0' )
   if( s[i++] == 'o' )
      count++;
*/



