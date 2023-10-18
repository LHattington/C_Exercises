/* Pide dos numeros y decirte si el primero es divisible entre el segundo,
si el segundo es divisible entre el primero o si no son divisibles entre si */
#include <stdio.h>

int main()
{
    int numA = 0;                      // Se ingresan 2 valores 
    printf("Ingresa un numero:  ");
    scanf("%i",&numA);
    int numB = 0;
    printf("Ingresa otro numero:  ");
    scanf("%i",&numB);
        
    if (numA % numB == 0)              // Determina si A es divisible entre B e imprime si si son divisibles o no
    {
        printf("El numero %i es divisible entre %i \n", numA, numB);
    }
    else 
    {
        printf("El numero %i no es divisible entre %i \n", numA, numB);
    }
    if (numB % numA == 0)             // Determina si b es divisible entre A e imprime si si son divisibles o no
    {
        printf("El numero %i es divisible entre %i \n", numB, numA);
    }
    else 
    {
        printf("El numero %i no es divisible entre %i \n", numB, numA);
    }
    return 0;
}