// Write a C program to input elements in an array and print the array in reverse using pointers.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int array[5];
    int  * pointer_to_array;
    
    printf("Escribe 5 numeros\n");

    for(int pos=0; pos<=4; pos++)
    {
        printf("Escribe el numero %d: ", pos+1); 
        scanf("%d", &array[pos]);
    }
    printf("El numero es: %d\n", *array->[pos] );

    return 0;
}