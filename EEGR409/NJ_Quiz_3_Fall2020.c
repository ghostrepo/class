/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Quiz 3
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

int i = 1;
int b = 0;
void main() {
    while (i <= 10) {
        if (b < i) {
            printf("*");
            b++;
        } 
        if (b == i) {
            printf("\n");
            b = 0;
            i++;
        }
    }
    i = i - 2;
    while (i != 0 ) {
        if (b < i) {
            printf("*");
            b++;
        } 
        if (b == i) {
            printf("\n");
            b = 0;
            i--;
        }
    }
}