/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 7, Lab 1
   This program prints out a reversed list of numbers entered by the user.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <windows.h>

void main() {
    double n[10], n_reverse[10], n_0[5], n_1[5];

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &n[i]);
    }

    printf("\nThe reverse of the numbers you entered are: ");
    for (int i = 0; i < 10; i++) {
        n_reverse[i] = n[9 - i];
        Sleep(500);
        printf("%.0f ", n_reverse[i]);
    }

    // modification
    printf("\nModified list output: ");
    for (int i = 0; i < 5; i++) {
            n_0[i] = n[4 - i];
    }
    for (int i = 0; i < 5; i++) {
        n_1[i] = n[9 - i];
        printf("%.0f %.0f ", n_0[i], n_1[i]);
    }

}