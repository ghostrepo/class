/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 5, Lab 1
   This program returns the size of a character entered by the user.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    char *c;

    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The character you enterered was: \'%c\'\n", c);
    printf("Its size is %c", c);

}