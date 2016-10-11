//EE 285 - Quiz 7

// G. Tuttle - Sep. 23, 2016

#include <stdio.h>

int main( void ){
    
    int i, j;
    
    for( i = 1; i <= 5; i++){
        for( j = 1; j <= 3; j++){
            printf("%d + %d = %d\n", j, i, i+j);
        }
    }
    
    return 0;
}