//EE 285 - Quiz 6

// G. Tuttle - Sep. 19, 2016

#include <stdio.h>

int main( void ){
    
    int a, b, c;
    double x, y;
    
    a = 5;
    b = 10;
    c = 20;
    
    for( x = -10; x <= 10; x = x + 0.5){
        
        y = a*x*x + b*x + c;
        printf( "x = %lf, and y = %lf.\n\n", x, y);
    }
    
    return 0;
}

//Note: This also works: printf( "x = %lf, and y = %lf.\n\n", x, a*x*x + b*x + c);
//Then you don't need the second double variable y.