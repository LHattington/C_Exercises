/* Ask for five numbers, save them to an array and show them in reverse order. */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

 

int main()
{
   uint16_t numSubjects = 0;
   uint16_t numStudents = 0;
   float grade = 0;
   float average = 0;
   float totalAverage = 0;
   float sumAverage = 0;

 

   printf("This program computes the average for n students with m subjects.\n");
   printf("Enter the number of Students: ");
   scanf("%hu",&numStudents);
   printf("Enter the number of Subjects for each student: ");
   scanf("%hu",&numSubjects);

 

   for(uint16_t counterStudents = 1; counterStudents <= numStudents; counterStudents++)
   {
       float sumGrades = 0;

 

       printf("Enter the grades for the student %i \n",counterStudents);
       for (uint16_t counterSubjects = 1; counterSubjects <= numSubjects; counterSubjects++)
       {
           printf("Subject %i: ", counterSubjects);
           scanf("%f, ",&grade);
           printf("Sum of grades is = %f + %f\n", sumGrades, grade);
           sumGrades = sumGrades + grade;
        }
       average = sumGrades / numSubjects;
       printf("The student %hu average is: %f \n", counterStudents, average);
       sumAverage = average + sumAverage;
   }
   totalAverage = sumAverage / numStudents;
   printf("The average for the group is: %f", totalAverage);
   return 0;
}