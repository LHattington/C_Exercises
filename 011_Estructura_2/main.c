/* Asks names, last names, age, year of studies, grades for four subjects and a s unique numeric code for n students (up to 10) in a group.
    Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
 
#define NAME_LENGTH 20
#define LASTNAME_LENGTH 30
 
int num = 0;
float sumGrades = 0;
float average = 0;
 
struct Students{                                                   // Structure with the students information
    char name[20];
    char lastName[30];
    unsigned int age;
    unsigned int yearsOfStudy;
    float grades[4];
    unsigned int numericCode;
}s[3];                                                                     // Number of students
 
int main()
{
    for(int counter = 0;counter < 3; counter ++)
    {
        fflush(stdin);
        printf("Student %i\n", (counter + 1));
        printf("Name: ");
        fgets(s[counter].name, NAME_LENGTH, stdin);
        printf("Lastname: ");
        fgets(s[counter].lastName, LASTNAME_LENGTH, stdin);
        printf("Age: ");
        scanf("%i", &s[counter].age);
        printf("Years of Study: ");
        scanf("%i", &s[counter].yearsOfStudy);
        for(int counter3 = 0; counter3 < 4; counter3 ++)
        {
            printf("Grade %d: ",(counter3 + 1));
            scanf("%f", &s[counter].grades[counter3]);
        }
        printf("Numeric Code: ");
        scanf("%i", &s[counter].numericCode);
        printf("\n");
    }
    while(1)
    {
        printf("Enter the student number: ");
        scanf("%i", &num);
        printf("Student %i\n", num);
        printf("Name: %s", s[num-1].name);
        printf("Lastname: %s", s[num-1].lastName);
        printf("Age: %i\n", s[num-1].age);
        printf("Years of Study: %i\n", s[num-1].yearsOfStudy);
        sumGrades = 0;
        for(int counter2 = 0; counter2 < 4; counter2 ++)
        {
             printf("Grade %d: %f\n", counter2 + 1, s[num-1].grades[counter2]);
             sumGrades = s[num-1].grades[counter2] + sumGrades;
            // average = sumGrades + average;
        }
        average = sumGrades / 4;
        printf("Numeric Code: %i\n", s[num-1].numericCode);
        printf("Average: %f\n", average);
        printf("\n");
    }
 
    return 0;
}