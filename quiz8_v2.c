//  EE 285 - quiz8
//  Includes extra print statement to show better what is happening.
//  Created by Gary Tuttle on 9/27/16.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {
    
    int i, counter = 0;
    int array1[10];
    int array2[10];
    
    srand( (int)(time(0)));        //seed the random number generator
    
    //fill the arrays with random integers between 0 and 9.
    
    for(i = 0; i <= 9; i++){
        array1[i] = rand()%10;
        array2[i] = rand()%10;
    }
    
    for( i = 0; i <= 9; i++){
        
        if( array1[i] == array2[i])
            counter++;
    }
    
    for(i = 0; i <= 9; i++)
        printf("%d ", array1[i]);
    
    printf("\n\n");
    
    for(i = 0; i <= 9; i++)
        printf("%d ", array2[i]);
 
    printf("\n\n");

    
    printf( "There were %d matching elements in the two arrays.\n\n", counter);
    
    return 0;
}
