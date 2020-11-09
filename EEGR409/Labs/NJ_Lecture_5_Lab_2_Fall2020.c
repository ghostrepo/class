/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 5, Lab 2
   This program prints ascii values from A to Z.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    char c = 'A';
    char c1 = 'a';
    
    for (int i = 0; i < 26; i++) {
        printf("%c = %d\t%c = %d\n", c, c, c1, c1);
        c++;
        c1++;
    }
}