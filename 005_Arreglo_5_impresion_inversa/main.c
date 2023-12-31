/* Pide que ingreses cinco numeros, los vas a guardar en un arreglo y luego los vas a imprimir pero en orden inverso. */
#include <stdio.h>

int main()
{
    // En C, los arreglos se indexan a partir de la posicion cero (0).
    // Es decir, array[] tiene los espacios array[0], array[1], array[2], array[3] y array[4]
    int array[5];

    printf("Escribe 5 numeros\n");

    for(int pos=0; pos<=4; pos++)
    {
        printf("Escribe el numero %d: ", pos+1); // Guarda los numeros en una posicion nueva del arreglo (0,1,2,3,...,n)
        scanf("%d", &array[pos]);
    }

    for(int pos=4; pos>=0; pos--)  // Hace la impresion del arreglo de manera inversa
    {
        printf("El numero %d es: %d\n", pos+1, array[pos]);
    }

    return 0;
}
