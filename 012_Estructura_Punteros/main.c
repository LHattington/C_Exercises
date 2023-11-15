/* Asks names, last names, age, year of studies, grades for four subjects and a student unique numeric code for n students (up to 10) in a group.
    Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#define NAME_LENGTH 20                                                      // Define constants
#define LASTNAME_LENGTH 30
#define NUMBER_OF_STUDENTS 1

int num = 0;                                                                                 // Declare variables
float sumGrades = 0;
float average = 0;

struct Students{                                                                         // Structure with the students information
    char name[20];
    char lastName[30];
    unsigned int age;
    unsigned int yearsOfStudy;
    float grades[4];
    unsigned int numericCode;
}student[NUMBER_OF_STUDENTS];                                                                                          // Number of students

int main()
{
    //int pointer = 9;
    //printf("Pointer is: %i\n", pointer);
    //printf("Address Pointer is: %p\n", &pointer);

    for(int counter = 0;counter < NUMBER_OF_STUDENTS; counter ++)                            // Initialize the counter
    {
        fflush(stdin);                                                                      // Clean all the characters save in "stdin" to avoid posibly sintax errors, clean everything
        printf("Student %i\n", (counter + 1));                                 // Print the student number
        printf("Name: ");
        fgets(student[counter].name, NAME_LENGTH, stdin);                 // Enter the name and save it in the position of the counter in name section of the structure
        printf("Lastname: ");
        fgets(student[counter].lastName, LASTNAME_LENGTH, stdin);  // Enter the lastname and save it in the position of the counter in lastname section of the structure
        printf("Age: ");
        scanf("%i", &student[counter].age);                                               // Enter the age and save it in the position of the counter in age section of the structure
        printf("Years of Study: ");
        scanf("%i", &student[counter].yearsOfStudy);                              // Enter the years of study and save it in the position of the counter in years of study section of the structure
        for(int counter3 = 0; counter3 < 4; counter3 ++)                  // Initialize the counter 3
        {
            printf("Grade %d: ",(counter3 + 1));
            scanf("%f", &student[counter].grades[counter3]);                     // Enter the grade according to the counter3 and it save in the array grades
        }                                                                                           //  in the position of the counter of the structure
        printf("Numeric Code: ");
        scanf("%i", &student[counter].numericCode);                                // Enter the numeric code and save it in the position of the counter in numeric code section of the structure
        printf("\n");
    }
    while(1)
    {
        printf("Enter the student number: ");
        scanf("%i", &num);                                                              // Enter a student number and all the info of that student will be printed
        printf("Student %i\n", num);
        printf("Memory address is: 0x%p\n", (void *)&student[num-1]);
        printf(sizeof((void *)&student[num -1]));
        printf("Name: %student", student[num-1].name);                                    // Print the name saved in the structure in the previously entered position
        printf("Lastname: %student", student[num-1].lastName);                       // Print the lastname saved in the structure in the previously entered position
        printf("Age: %i\n", student[num-1].age);                                      // Print the age saved in the structure in the previously entered position
        printf("Years of Study: %i\n", student[num-1].yearsOfStudy);   // Print the years of study saved in the structure in the previously entered position
        sumGrades = 0;                                                                  // Initialize "sumGrades" variable
        for(int counter2 = 0; counter2 < 4; counter2 ++)                // Initialize counter2
        {
             printf("Grade %d: %f\n", counter2 + 1, student[num-1].grades[counter2]);    // Print the grade saved in the array "grades" in the previusly entered position
             sumGrades = student[num-1].grades[counter2] + sumGrades;                         // Calculate the sum of the array "grades" and "sumGrades"
        }                                                                                                                // and save a new value in the variable "sumGrades"
        average = sumGrades / 4;                                                   // Calulate the average of the grades
        printf("Numeric Code: %i\n", student[num-1].numericCode);        // Print the numeric code saved in the structure in the previously entered position
        printf("Average: %f\n", average);                                      // Print the average of the student'student grades
        printf("\n");
    }

    return 0;
}
