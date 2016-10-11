//EE 2895 - quiz 10

//G. Tuttle - Oct. 5, 2016

#include <stdio.h>
int someFunction( int input );

int main( void ){
    
    int i, x;
    
    for(i = 1; i <= 3; i++){
        
        x = someFunction( i );
        printf("x = %d\n\n", x);
    }
    
    return 0;
}

/**  someFunction  **/

int someFunction( int input ){
    
    int j, y;
    
    y = input;
    for(j = 1; j <= 3; j++){
        y = y + j;
        printf("y = %d\n", y);
    }
    
    return y;
}
