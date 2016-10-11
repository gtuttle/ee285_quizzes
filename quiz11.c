//EE 285 - Quiz 11

// G. Tuttle - Oct. 10, 2016

#include <stdio.h>
int polyCalc( int first, int second, int third, int last);  //function prototype.

int main( void ){
    
    int a, b, c, x, y;
    
    a = 2;
    b = 3;
    c = 4;
    x = 10;
    
    y = polyCalc( a, b, c, x);
    
    printf( "The function returned %d.\n\n", y);
    
    return 0;
}

int polyCalc( int first, int second, int third, int last){
    
    int poly;
    
    poly = first*last*last + second*last + third;
    
    return poly;
}
