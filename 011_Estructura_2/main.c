/* Asks names, last names, age, year of studies, grades for four subjects and a s unique numeric code for n students (up to 10) in a group. 
    Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int num = 0;
float sumGrades = 0;
float average = 0;

struct Students{                                                   // Structure with the students information
    char name[20];
    char lastName[20];
    unsigned int age;
    unsigned int yearsOfStudy;
    float grades[4];
    unsigned int numericCode;
}s[10];                    // Number of students

int main()
{
    for(int counter = 0;counter < 10; counter ++)
    {
        printf("Name: ");
        scanf("%s", &s[counter].name);
        printf("Lastname: ");
        scanf("%s", &s[counter].lastName);
        printf("Age: ");
        scanf("%i", &s[counter].age);
        printf("Years of Study: ");
        scanf("%i", &s[counter].yearsOfStudy);
        for(int counter3 = 0; counter3 < 4; counter3 ++)
        {
            printf("Grade: ");
            scanf("%d:%f", counter3 + 1, &s[counter].grades[counter3]);
        }
        printf("Numeric Code: ");
        scanf("%i", &s[counter].numericCode);
    }
    while ()
    {
        printf("Enter the student number: ");
        scanf("%i", &num);
        printf("Name: %s\n", s[num].name);
        printf("Lastname: %s\n", s[num].lastName);
        printf("Age: %i\n", s[num].age);
        printf("Years of Study: %i\n", s[num].yearsOfStudy);
        sumGrades = 0;
        for(int counter2 = 0; counter2 < 4; counter2 ++)
        {
             printf("Grade %d: %f\n", counter2 + 1, s[num].grades[counter2]);
             sumGrades = s[num].grades[counter2] + sumGrades;
            // average = sumGrades + average;
        }
        average = sumGrades / 4;
        printf("Numeric Code: %i\n", s[num].numericCode);        
        printf("Average: %f\n", average);
    }
    
    return 0; 
}