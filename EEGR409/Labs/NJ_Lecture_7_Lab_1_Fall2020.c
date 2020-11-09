/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 6, Lab 2
   This program 

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>

void main() {
    double n[10], n_reverse[10];

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &n[i]);
    }

    printf("\nThe reverse of the numbers you entered are: ");
    for (int i = 0; i < 10; i++) {
        n_reverse[i] = n[9 - i];
        printf("%.2f ", n_reverse[i]);
    }

}