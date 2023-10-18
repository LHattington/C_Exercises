/* Pide dos numeros y decirte si el primero es divisible entre el segundo */
#include <stdio.h>

int main()
{                       // El usuario ingresa 2 numeros 
    int numA = 0;
    printf("Ingresa un numero:  ");
    scanf("%i",&numA);
    int numB = 0;
    printf("Ingresa otro numero:  ");
    scanf("%i",&numB);
    
    if (numA % numB == 0){   // Determina si A es divisible o no entre B
        printf("El numero %i es divisible entre %i", numA, numB);
    }
    else {
        printf("El numero %i no es divisible entre %i", numA, numB);
    }

    return 0;
}
