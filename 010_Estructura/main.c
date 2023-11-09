/* Asks names, last names, age, year of studies, grades for four subjects and a s unique numeric code for n students (up to 10) in a group. 
    Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

struct Students{                                                   // Structure with the students information
    char name[20];
    char lastName[20];
    unsigned int age;
    unsigned int yearsOfStudy;
    float grades[4];
    unsigned int numericCode;
}s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10;                    // Number of students

int main()
{
    strcpy(s1.name, "Rafael");                                 // Student 1 info
    strcpy(s1.lastName, "Hernandez");
    s1.age = 22;
    s1.yearsOfStudy = 18;
    s1.grades[4] = 10, 10, 10, 9.5;
    s1.numericCode = 01;

    strcpy(s2.name, "Aldo");                                    // Student 2 info
    strcpy(s2.lastName, "Luna");
    s2.age = 22;
    s2.yearsOfStudy = 19;
    s2.grades[4] = 10, 10, 10, 10;
    s2.numericCode = 02;

    strcpy(s3.name, "Moana");                                   // Student 3 info
    strcpy(s3.lastName, "De Motonui");
    s3.age = 24;
    s3.yearsOfStudy = 20;
    s3.grades[4] = 10, 10, 9.5, 9.5;
    s3.numericCode = 03;

    strcpy(s4.name, "Pippin");                               // Student 4 info
    strcpy(s4.lastName, "Took");
    s4.age = 24;
    s4.yearsOfStudy = 20;
    s4.grades[4] = 9, 10, 9.5, 9.5;
    s4.numericCode = 04;

    strcpy(s5.name, "Pablo");                                   // Student 5 info
    strcpy(s5.lastName, "Morales");
    s5.age = 23;
    s5.yearsOfStudy = 20;
    s5.grades[4] = 10, 9.4, 9, 9.5;
    s5.numericCode = 05;

    strcpy(s6.name, "Sam");                                 // Student 6 info
    strcpy(s6.lastName, "Wise");
    s6.age = 23;
    s6.yearsOfStudy = 20;
    s6.grades[4] = 9, 9.4, 9.2, 9.5;
    s6.numericCode = 06;

    strcpy(s7.name, "Sherlock");                             // Student 7 info
    strcpy(s7.lastName, "Holmes");
    s7.age = 23;
    s7.yearsOfStudy = 23;
    s7.grades[4] = 10, 10, 10, 10;
    s7.numericCode = 07;

    strcpy(s8.name, "Bilbo");                                   // Student 8 info
    strcpy(s8.lastName, "Baggins");
    s8.age = 23;
    s8.yearsOfStudy = 20;
    s8.grades[4] = 8,5, 8.7, 9.2, 9.4;
    s8.numericCode = 08;

    strcpy(s9.name, "Artu");                                 // Student 9 info
    strcpy(s9.lastName, "Rito");
    s9.age = 24;
    s9.yearsOfStudy = 20;
    s9.grades[4] = 9.3, 9, 8.7, 8.5;
    s9.numericCode = 09;

    strcpy(s10.name, "Winnie");                        // Student 10 info
    strcpy(s10.lastName, "Pooh");
    s10.age = 24;
    s10.yearsOfStudy = 20;
    s10.grades[4] = 9.7, 9.4, 9.6, 9.5;
    s10.numericCode =10;

    int num = 0;
    printf("Enter the student number: ");
    scanf("%i", &num);

    

    return 0; 
}