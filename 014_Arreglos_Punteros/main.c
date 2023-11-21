// Write a C program to input elements in an array and print the array in reverse using pointers.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LENGTH_OF_ARRAY 3                                                     // Define constants

int main()
{
    int array[LENGTH_OF_ARRAY];                                                // Declare an array
    int  * pointer_to_array;                                                              // Declare a pointer
    
    printf("Enter %d number(s)\n", LENGTH_OF_ARRAY);            // Print how many numbers has the array

    for(int pos=0; pos<=2; pos++)                                                      // Counter to save the numbers in the correct position of the array
    {
        printf("Enter the number %d: ", pos+1);
        scanf("%d", (array + pos));                                                     // Enter the number and save it in the position of the counter of the array
    // printf("The number %d is: %d\n", pos+1 ,*(array + pos) );
    } 
    for(int pos=2; pos>=0; pos--)                                                       // Counter to put the numbers in the correct position
    {
        printf("The number %d is: %d\n", pos+1 ,*(array + pos) );       // Print the correct possition of the numbers of the array
    } 

    return 0;
}