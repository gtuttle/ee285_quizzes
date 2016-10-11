//EE 285 - Lab 2 quiz

// G. Tuttle - Sep. 19, 2016

#include <stdio.h>

int main( void ){
    
    int x;
    double numb;
    
    printf("Enter a integer between 1 and 4, inclusive: ");
    scanf("%d", &x);
    
    if( x == 1 ){
        numb = 3.14159;
    }
    else if( x == 2 ){
        numb = 2.71828;
    }
    else if( x == 3 ){
        numb = 1.61803;
    }
    else if( x==4){
        numb = 42;
    }
    
    printf("\nnumb = %lf.\n\n", numb);
    
    return 0;
}
