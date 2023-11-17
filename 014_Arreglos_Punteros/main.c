// Write a C program to input elements in an array and print the array in reverse using pointers.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int array[3];
    int  * pointer_to_array;
    
    printf("Escribe 5 numeros\n");

    for(int pos=0; pos<=2; pos++)
    {
        printf("Escribe el numero %d: ", pos+1); 
        scanf("%d", (array + pos));
    // printf("El numero %d es: %d\n", pos+1 ,*(array + pos) );
    } 
    for(int pos=2; pos>=0; pos--)
    {
        printf("El numero %d es: %d\n", pos+1 ,*(array + pos) );
    } 

    return 0;
}