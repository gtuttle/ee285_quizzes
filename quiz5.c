//EE 285 - Quiz 5

// G. Tuttle - Sep. 19, 2016

#include <stdio.h>

int main( void ){
    
    int theCount;
    int n = 1;
    
    printf("Please enter a value of the theCount: ");
    scanf("%d", &theCount);
    
    printf("\n");
    
    while( n <= theCount){
        printf("%d. %d job offers at the career fair. Ha Ha Ha.\n\n", n, n );
        n++;
    }

    return 0;
}