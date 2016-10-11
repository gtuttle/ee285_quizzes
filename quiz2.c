//EE 285 - Quiz 2

// G. Tuttle - Sep. 12, 2016

#include <stdio.h>

int main( void ){
    
    int anInt;
    double aDub;
    
    printf("Please enter a integer: ");
    scanf("%d", &anInt);
 
    printf("Please enter a real number: ");
    scanf("%lf", &aDub);
    
    printf("\n\n");
    
    printf("The integer is %d.\n\n", anInt);
 
    printf("The real number is %lf.\n\n", aDub);

    return 0;
}