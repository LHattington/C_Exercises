/* conjetura de Collatz, cuando agregues un dato con decimales y/o negativo imprime qeu no se puede hacer la conjetura */
#include <stdio.h>

int main()
{
    int num = 0; // Se ingresa un numero
    printf("Ingresa un numero:  ");
    scanf("%i",&num);       // Averiguar como hacer para que no permita numeros negativos ni numeros decimales 
    if (num < 1)                 // https://parzibyte.me/blog/2020/08/08/c-validacion-numeros/
    {                                // https://es.stackoverflow.com/questions/76866/c%c3%b3mo-validar-el-tipo-de-entrada-en-c#:~:text=El%20c%C3%B3digo%20verifica%20que%20el%20n%C3%BAmero%20de%20par%C3%A1metros,%21%3D%201%29%20printf%20%28%22failuren%22%29%3B%20else%20printf%20%28%22valid%20integer%22%29%3B
        printf("No se puede hacer la conjetura de Collatz con %i", num);
    }
    
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