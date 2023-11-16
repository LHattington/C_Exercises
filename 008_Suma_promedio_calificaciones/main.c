/* Suma y promedio de calificaciones */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
   uint16_t numSubjects = 0;                                                             // Declaracion de las variables
   float grade = 0;
   float sumGrades = 0;
   float average = 0;

   printf("Enter the number of Subjects: ");                                    
   scanf("%hu",&numSubjects);                                                         // Imprime el numero de materias que se tienen
   printf("Enter the grades: ");
   for (uint16_t counter = 1; counter <= numSubjects; counter++)     // Inicializacion del contador
   {
      scanf("%f, ",&grade);                                                               // Escribe las calificicaciones de las materias correspondientes
      printf("%f + %f\n", sumGrades, grade);                                  // Imprime la suma de las calificaciones
      sumGrades = grade + sumGrades;                                            // Suma las calificaciones y el valor se va sobrescribiendo en la variable "sumGrades"
   }
   average = sumGrades / numSubjects;                                          // Saca el promedio de todas las calificaciones ingresadas
   printf("The average is: %f", average);
   
   return 0;
}