/* Asks names, last names, age, year of studies, grades for four subjects and a s unique numeric code for n students (up to 10) in a group.
    Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
 
#define NAME_LENGTH 20                                                      // Define constants
#define LASTNAME_LENGTH 30
 
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
}s[3];                                                                                          // Number of students

int main()
{
    for(int counter = 0;counter < 3; counter ++)                            // Initialize the counter
    {
        fflush(stdin);                                                                      // Clean all the characters save in "stdin" to avoid posibly sintax errors, clean everything
        printf("Student %i\n", (counter + 1));                                 // Print the student number
        printf("Name: ");                                                                        
        fgets(s[counter].name, NAME_LENGTH, stdin);                 // Enter the name and save it in the position of the counter in name section of the structure
        printf("Lastname: ");                                                                   
        fgets(s[counter].lastName, LASTNAME_LENGTH, stdin);  // Enter the lastname and save it in the position of the counter in lastname section of the structure
        printf("Age: ");
        scanf("%i", &s[counter].age);                                               // Enter the age and save it in the position of the counter in age section of the structure
        printf("Years of Study: ");
        scanf("%i", &s[counter].yearsOfStudy);                              // Enter the years of study and save it in the position of the counter in years of study section of the structure
        for(int counter3 = 0; counter3 < 4; counter3 ++)                  // Initialize the counter 3
        {
            printf("Grade %d: ",(counter3 + 1));                                         
            scanf("%f", &s[counter].grades[counter3]);                     // Enter the grade according to the counter3 and it save in the array grades
        }                                                                                           //  in the position of the counter of the structure
        printf("Numeric Code: ");
        scanf("%i", &s[counter].numericCode);                                // Enter the numeric code and save it in the position of the counter in numeric code section of the structure
        printf("\n");
    }
    while(1)
    {
        printf("Enter the student number: ");
        scanf("%i", &num);                                                              // Enter a student number and all the info of that student will be printed 
        printf("Student %i\n", num);
        printf("Name: %s", s[num-1].name);
        printf("Lastname: %s", s[num-1].lastName);
        printf("Age: %i\n", s[num-1].age);
        printf("Years of Study: %i\n", s[num-1].yearsOfStudy);
        sumGrades = 0;                                                                  // Initialize "sumGrades" variable
        for(int counter2 = 0; counter2 < 4; counter2 ++)                // Initialize counter2
        {
             printf("Grade %d: %f\n", counter2 + 1, s[num-1].grades[counter2]);    // Print the grade saved in the array "grades" in the previusly entered position
             sumGrades = s[num-1].grades[counter2] + sumGrades;                         // Calculate the sum of the array "grades" and "sumGrades"
        }                                                                                                                // and save a new value in the variable "sumGrades"
        average = sumGrades / 4;
        printf("Numeric Code: %i\n", s[num-1].numericCode);
        printf("Average: %f\n", average);
        printf("\n");
    }
 
    return 0;
}