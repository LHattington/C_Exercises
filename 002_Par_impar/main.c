/* Pide un numero y te dice si ese numero es par o impar */
#include <stdio.h>

int main()
{
    int numero = 0; // Se ingresa un numero
    printf("Ingresa un numero:  ");
    scanf("%i",&numero);
    
    if (numero % 2 == 0) // Si el numero es divisible entre 2 el numero es par 
    {
        printf("El numero %i es par", numero);
    }
    else {               // Si el numero no es divisible entre 2 el numero es impar 
        printf("El numero %i es impar", numero);
    }

    return 0;
}