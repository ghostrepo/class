/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 9, Lab 2
   This program uses a pointer to address the values of an array.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>

void main() {
    int some_numbers[5] = {101, 102, 103, 104, 105};
    int *pNumber;
    pNumber = some_numbers;
    
    for (int i = 0; i < 5; i++) {
        printf("some_numbers[%d] = %d\n", i, *pNumber);
        pNumber++;
    }
}