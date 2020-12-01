/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 10, Lab 1
   This program prints the elements of a character array.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>

void main() {
    char school[25] = "Morgan State University\n";

    for (int i = 0; i < 23; i++) {
        printf("mySchool[%d] = \'%c\'\n", i, school[i]);
    }
}