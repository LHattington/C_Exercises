/* Asks names, last names, age, year of studies, grades for four subjects and a s unique numeric code for n students (up to 10) in a group. 
    Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int num = 0;
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
    strcpy(s[0].name, "Rafael");                                 // Student 1 info
    strcpy(s[0].lastName, "Hernandez");
    s[0].age = 22;
    s[0].yearsOfStudy = 18;
    s[0].grades[4] = 10, 10, 10, 9.5;
    s[0].numericCode = 0xd01;

    strcpy(s[1].name, "Aldo");                                    // Student 2 info
    strcpy(s[1].lastName, "Luna");
    s[1].age = 22;
    s[1].yearsOfStudy = 19;
    s[1].grades[4] = 10, 10, 10, 10;
    s[1].numericCode = 0xd02;

    strcpy(s[2].name, "Moana");                                   // Student 3 info
    strcpy(s[2].lastName, "De Motonui");
    s[2].age = 24;
    s[2].yearsOfStudy = 20;
    s[2].grades[4] = 10, 10, 9.5, 9.5;
    s[2].numericCode = 0xd03;

    strcpy(s[3].name, "Pippin");                               // Student 4 info
    strcpy(s[3].lastName, "Took");
    s[3].age = 24;
    s[3].yearsOfStudy = 20;
    s[3].grades[4] = 9, 10, 9.5, 9.5;
    s[3].numericCode = 0xd04;

    strcpy(s[4].name, "Pablo");                                   // Student 5 info
    strcpy(s[4].lastName, "Morales");
    s[4].age = 23;
    s[4].yearsOfStudy = 20;
    s[4].grades[4] = 10, 9.4, 9, 9.5;
    s[4].numericCode = 0xd05;

    strcpy(s[5].name, "Sam");                                 // Student 6 info
    strcpy(s[5].lastName, "Wise");
    s[5].age = 23;
    s[5].yearsOfStudy = 20;
    s[5].grades[4] = 9, 9.4, 9.2, 9.5;
    s[5].numericCode = 0xd06;

    strcpy(s[6].name, "Sherlock");                             // Student 7 info
    strcpy(s[6].lastName, "Holmes");
    s[6].age = 23;
    s[6].yearsOfStudy = 23;
    s[6].grades[4] = 10, 10, 10, 10;
    s[6].numericCode = 0xd07;

    strcpy(s[7].name, "Bilbo");                                   // Student 8 info
    strcpy(s[7].lastName, "Baggins");
    s[7].age = 23;
    s[7].yearsOfStudy = 20;
    s[7].grades[4] = 8,5, 8.7, 9.2, 9.4;
    s[7].numericCode = 0xd08;

    strcpy(s[8].name, "Artu");                                 // Student 9 info
    strcpy(s[8].lastName, "Rito");
    s[8].age = 24;
    s[8].yearsOfStudy = 20;
    s[8].grades[4] = 9.3, 9, 8.7, 8.5;
    s[8].numericCode = 0xd09;

    strcpy(s[9].name, "Winnie");                        // Student 10 info
    strcpy(s[9].lastName, "Pooh");
    s[9].age = 24;
    s[9].yearsOfStudy = 20;
    s[9].grades[4] = 9.7, 9.4, 9.6, 9.5;
    s[9].numericCode =0xd10;

    for (int counter = 0; counter < 10; counter ++)
    {
        printf("Enter the student number: ");
        scanf("%i", &num);
        printf("Name: %s\n", s[num].name);
        printf("Lastname: %s\n", s[num].lastName);
        printf("Age: %i\n", s[num].age);
        printf("Years of Study: %i\n", s[num].yearsOfStudy);
        for(int counter2 = 0; counter2 < 4; counter2 ++)
        {
            sumGrades = s[num].grades[counter2] + sumGrades;
            // average = sumGrades + average;
        }
        average = sumGrades / 4;
        printf("Numeric Code: %i\n", s[num].numericCode);        
        printf("Grades: %f\n", s[num].grades);
        printf("Average: %f\n", average);
    }

    return 0; 
}