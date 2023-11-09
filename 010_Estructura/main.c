/* Asks names, last names, age, year of studies, grades for four subjects
and a student unique numeric code for n students (up to 10) in a group. 
Then ask for a student number and print its saved values as well as an average of the four grades. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

struct Student {
    char name[30];
    char lastName[50];
    unsigned int age;
    unsigned int yearsOfStudy;
    float grades[4];
    unsigned int numericCode;
}students[10];

int main()
{

return 0; 
}