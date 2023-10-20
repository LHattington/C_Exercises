/* Suma y promedio de calificaciones */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
   uint16_t numSubjects = 0;
   float grade = 0;
   float sumGrades = 0;
   float average = 0;

   printf("Enter the number of Subjects: ");
   scanf("%hu",&numSubjects);
   printf("Enter the grades: ");
   for (uint16_t counter = 1; counter <= numSubjects; counter++)
   {
        scanf("%f, ",&grade);
        printf("%f + %f\n", sumGrades, grade);
        sumGrades = grade + sumGrades;
   }
   average = sumGrades / numSubjects;
   printf("The average is: %f", average);
   
   return 0;
}