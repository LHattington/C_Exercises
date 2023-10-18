/* Pide dos numeros y decirte si el primero es divisible entre el segundo,
si el segundo es divisible entre el primero o si no son divisibles entre si */
#include <stdio.h>

int main()
{
    int numA = 0;
    printf("Ingresa un numero:  ");
    scanf("%i",&numA);
    int numB = 0;
    printf("Ingresa otro numero:  ");
    scanf("%i",&numB);
        
    if (numA % numB == 0)
    {
        printf("El numero %i es divisible entre %i \n", numA, numB);
    }
    else 
    {
        printf("El numero %i no es divisible entre %i \n", numA, numB);
    }
    if (numB % numA == 0)
    {
        printf("El numero %i es divisible entre %i \n", numB, numA);
    }
    else 
    {
        printf("El numero %i no es divisible entre %i \n", numB, numA);
    }
    return 0;
}