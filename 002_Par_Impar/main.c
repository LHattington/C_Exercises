/* Pide un numero y te dice si ese numero es par o impar */
#include <stdio.h>

int main()
{
    int numero = 0;
    printf("Ingresa un número:  ");
    scanf("%i",&numero);
    
    if (numero % 2 == 0){
        printf("El número %i es par", numero);
    }
    else {
        printf("El número %i es impar", numero);
    }

    return 0;
}