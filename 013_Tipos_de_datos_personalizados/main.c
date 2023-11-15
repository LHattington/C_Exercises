// Print the size of an int pointer and the size of a char pointer and the size of a pointer to float or double
// Ask the user to enter two numbers and add them using only pointers

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int number = 0;
char group = 'A';
float code = 1.0767;
int * pointer_to_number = &number;
char * pointer_to_group = &group;
float * pointer_to_code = &code;
 
int main(){
 
    printf("The value of \"number\" is: %d\n", number);
    printf("The size of \"number\" is: %lu\n", sizeof(number));
    printf("The memory address for \"number\" is: 0x%p\n", pointer_to_number);
    printf("The \"group\" is: %c\n", group);
    printf("The size of \"group\" is: %lu\n", sizeof(group));
    printf("The memory address for \"group\" is: 0x%p\n", pointer_to_group);
    printf("The numeric \"code\" value is: %f\n", code);
    printf("The size of \"code\" is: %lu\n", sizeof(code));
    printf("The memory address for \"code\" is: 0x%p\n", pointer_to_code);
 
    *pointer_to_number = 10;
    printf("The value of \"number\" is: %d\n", number);
    printf("The memory address for \"number\" is: 0x%p\n", pointer_to_number);
 
    return 0;
}