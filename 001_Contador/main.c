/* Pide un numero entero e imprimir todos los numeros desde el cero hasta ese numero */
#include <stdio.h>

int main()
{
    int num = 0;  // El usuario ingresa un numero
    printf("Escribe un numero: ");
    scanf("%i", &num);

    int contador = 0;  // se inicializa un contador

    while(contador <= num)  // Si el contador es menor que el numero ingresado por el usuario se imprime 
    {                       // desde el 0 hasta el numero puesto por el usuario. Ex. si elegimos el 5 --> (0 1 2 3 4 5)
        printf("%i\n", contador);
        contador = contador + 1;
    }

    return 0;
}
