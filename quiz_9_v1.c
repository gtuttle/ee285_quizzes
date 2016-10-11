//  quiz9
//  according to the stated requirements
//  Created by Gary Tuttle on 9/27/16.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {

    int i = 0, j = 0, k = 0;
    int array1[10];
    int array_even[10];
    int array_odd[10];
    
    srand((int)(time(0)));
    
    //fill the intial array with random numbers betwen 0 and 25
    
    for(i = 0; i <= 9; i++)
        array1[i] = rand()%26;
    
    for(i = 0; i <= 9; i++){
        
        if(array1[i]%2 == 0){
            array_even[j] = array1[i];
            j++;
        }
        else{
            array_odd[k] = array1[i];
            k++;
        }
    }
    
    printf( "There were %d evens and %d odds in the original array.\n\n", j, k);
    
    return 0;
}
