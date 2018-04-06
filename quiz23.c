// EE 285 - quiz 23

#include <stdio.h>

struct date{
   int year, month, day;
};

int main( void ) {
   
   struct date today;    //alternative initilization: struct date today = {2018, 4, 2}
   
   today.year = 2018;
   today.month = 4;
   today.day = 2;
   
   printf( "Today is: %d/%d/%d.\n\n", today.month, today.day, today.year );
   
   return 0;
}

/*Output
 Today is: 4/2/2018.
 
 Program ended with exit code: 0
 */
