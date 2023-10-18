#include <stdio.h>

int main()
{
    int num = 0;
    printf("Escribe un numero: ");
    scanf("%i", &num);

    int contador = 0;

    while(contador <= num)
    {
        printf("%i\n", contador);
        contador = contador + 1;
    }

    return 0;
}
