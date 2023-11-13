/* Ask for five numbers, save them to an array and show them in reverse order. */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{                                                                                                                                                       // Se inicializan las variables.
   uint16_t numSubjects = 0;
   uint16_t numStudents = 0;
   float grade = 0;
   float average = 0;
   float totalAverage = 0;
   float sumAverage = 0;

   printf("This program computes the average for n students with m subjects.\n");
   printf("Enter the number of Students: ");
   scanf("%hu",&numStudents);                                                                                                       // Imprime el numero de estudiantes que el usuario eligio
   printf("Enter the number of Subjects for each student: ");
   scanf("%hu",&numSubjects);                                                                                                       // Imprime el numero de materias deseado

   for(uint16_t counterStudents = 1; counterStudents <= numStudents; counterStudents++)         // Se inicializa el contador
   {
       float sumGrades = 0;                                                                                                                // Se inicializan las variables

       printf("Enter the grades for the student %i \n",counterStudents);
       for (uint16_t counterSubjects = 1; counterSubjects <= numSubjects; counterSubjects++)     // Se inicializa el contador para ingresar las calificaciones
       {                                                                                                                                              // dependiendo del numero de materias
           printf("Subject %i: ", counterSubjects);
           scanf("%f, ",&grade);                                                                                                           // Imprime las calificaciones
           printf("Sum of grades is = %f + %f\n", sumGrades, grade);                                                 // Imprime la suma de las calificaciones
           sumGrades = sumGrades + grade;                                                                                         // Calcula la suma de las calificaciones y sobreescribe
        }                                                                                                                                              // sumGrades para que guarde el valor mas reciente
       average = sumGrades / numSubjects;                                                                                      // Calcula el promedio de las calificaciones ingresadas
       printf("The student %hu average is: %f \n", counterStudents, average);                               // Imprime el numero de estudiante y el pomedio de este
       sumAverage = average + sumAverage;                                                                                     // Calcula la suma de los promedios de los estudiantes y 
   }                                                                                                                                                  // sobreescribe sumAverage patra guardar el valor mas reciente
   totalAverage = sumAverage / numStudents;                                                                               // Calcula el promedio de los promedios de todos los estudiantes
   printf("The average for the group is: %f", totalAverage);                                                          // Imprime el promedio tatal de un grupo de estudiantes
  
   return 0;
}