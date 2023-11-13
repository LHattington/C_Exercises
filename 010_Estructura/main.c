/* Asks names, last names, age, year of studies, grades for four subjects and a s unique numeric code for n students (up to 10) in a group. 
    Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int num = 0;                                                            // Declare variables
float sumGrades = 0;
float average = 0;

struct Students{                                                   // Structure with the students information
    char name[20];
    char lastName[20];
    unsigned int age;
    unsigned int yearsOfStudy;
    float grades[4];
    unsigned int numericCode;
}s[10];                                                                    // Number of students

int main()
{
    strcpy(s[0].name, "Rafael");                              // Student 1 info
    strcpy(s[0].lastName, "Hernandez");
    s[0].age = 22;
    s[0].yearsOfStudy = 18;
    s[0].grades[0] = 10;
    s[0].grades[1] = 10;
    s[0].grades[2] = 10;
    s[0].grades[3] = 9.5;
    s[0].numericCode = 1001;

    strcpy(s[1].name, "Aldo");                                    // Student 2 info
    strcpy(s[1].lastName, "Luna");
    s[1].age = 22;
    s[1].yearsOfStudy = 19;
    s[1].grades[0] = 10;
    s[1].grades[1] = 10;
    s[1].grades[2] = 10;
    s[1].grades[3] = 10;
    s[1].numericCode = 1002;

    strcpy(s[2].name, "Moana");                                   // Student 3 info
    strcpy(s[2].lastName, "De Motonui");
    s[2].age = 24;
    s[2].yearsOfStudy = 20;
    s[2].grades[0] = 10;
    s[2].grades[1] = 10;
    s[2].grades[2] = 9.5;
    s[2].grades[3] = 9.5;
    s[2].numericCode = 1003;

    strcpy(s[3].name, "Pippin");                               // Student 4 info
    strcpy(s[3].lastName, "Took");
    s[3].age = 24;
    s[3].yearsOfStudy = 20;
    s[3].grades[0] = 9;
    s[3].grades[1] = 10;
    s[3].grades[2] = 9.5;
    s[3].grades[3] = 9.5;
    s[3].numericCode = 1004;

    strcpy(s[4].name, "Pablo");                                   // Student 5 info
    strcpy(s[4].lastName, "Morales");
    s[4].age = 23;
    s[4].yearsOfStudy = 20;
    s[4].grades[0] = 10;
    s[4].grades[1] = 9.4;
    s[4].grades[2] = 9;
    s[4].grades[3] = 9.5;
    s[4].numericCode = 1005;

    strcpy(s[5].name, "Sam");                                 // Student 6 info
    strcpy(s[5].lastName, "Wise");
    s[5].age = 23;
    s[5].yearsOfStudy = 20;
    s[5].grades[0] = 9;
    s[5].grades[1] = 9.4;
    s[5].grades[2] = 9.2;
    s[5].grades[3] = 9.5;
    s[5].numericCode = 1006;

    strcpy(s[6].name, "Sherlock");                             // Student 7 info
    strcpy(s[6].lastName, "Holmes");
    s[6].age = 23;
    s[6].yearsOfStudy = 23;
    s[6].grades[0] = 10;
    s[6].grades[1] = 10;
    s[6].grades[2] = 10;
    s[6].grades[3] = 10;
    s[6].numericCode = 1007;

    strcpy(s[7].name, "Bilbo");                                   // Student 8 info
    strcpy(s[7].lastName, "Baggins");
    s[7].age = 23;
    s[7].yearsOfStudy = 20;
    s[7].grades[0] = 8.5;
    s[7].grades[1] = 8.7;
    s[7].grades[2] = 9.2;
    s[7].grades[3] = 9.4;
    s[7].numericCode = 1008;

    strcpy(s[8].name, "Artu");                                 // Student 9 info
    strcpy(s[8].lastName, "Rito");
    s[8].age = 24;
    s[8].yearsOfStudy = 20;
    s[8].grades[0] = 9.3;
    s[8].grades[1] = 9;
    s[8].grades[2] = 8.7;
    s[8].grades[3] = 8.5;
    s[8].numericCode = 1009;

    strcpy(s[9].name, "Winnie");                        // Student 10 info
    strcpy(s[9].lastName, "Pooh");
    s[9].age = 24;
    s[9].yearsOfStudy = 20;
    s[9].grades[0] = 9.7;
    s[9].grades[1] = 9.4;
    s[9].grades[2] = 9.6;
    s[9].grades[3] = 9.5;
    s[9].numericCode = 1010;

    while()
    {
        printf("Enter the student number: ");                                                           
        scanf("%i", &num);                                                                                       // Enter the student number
        printf("Name: %s\n", s[num].name);                                                            // Print the name saved in the structure in the previously entered position 
        printf("Lastname: %s\n", s[num].lastName);                                               // Print the lastname saved in the structure in the previously entered position
        printf("Age: %i\n", s[num].age);                                                                  // Print the age saved in the structure in the previously entered position
        printf("Years of Study: %i\n", s[num].yearsOfStudy);                               // Print the years of study saved in the structure in the previously entered position
        sumGrades = 0;                                                                                           // Initialize the variable "sumGrades"
        for(int counter2 = 0; counter2 < 4; counter2 ++)                                        // Initialize the counter 2
        {
             printf("Grade %d: %f\n", counter2 + 1, s[num].grades[counter2]);       // Print the grade saved in the array "grades" in the previusly entered position
             sumGrades = s[num].grades[counter2] + sumGrades;                            // Calculate the sum of the array "grades" and "sumGrades"
            // average = sumGrades + average;                                                            and save a new value in the variable "sumGrades"
        }
        average = sumGrades / 4;                                                                         // Calculate the average of the grades
        printf("Numeric Code: %i\n", s[num].numericCode);                                 // Print the numeric code saved in the structure in the previously entered position
        printf("Average: %f\n", average);                                                            // Print the average previously calculated
    }

    return 0; 
}