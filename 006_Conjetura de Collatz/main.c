/* conjetura de Collatz */
#include <stdio.h>

int main()
{
    int num = 0; // Se ingresa un numero
    printf("Ingresa un numero:  ");
    scanf("%i",&num);
    
    while (num > 1)
    {
        if (num % 2 == 0) // Si el numero es divisible entre 2 el numero es par 
        {
            num = num / 2;
        }
        else {               // Si el numero no es divisible entre 2 el numero es impar 
            num = (num * 3) + 1;
        }
        printf("%i, ", num);
    }
    return 0;
}