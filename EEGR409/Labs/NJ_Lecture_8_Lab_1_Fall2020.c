/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 8, Lab 1
   This program sorts the numbers in a given array.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>

void sort() {
    static int a[8] = {5, 9, 3, 1, 2, 6, 2, 5};
    int i, j, temp;

    for (i = 0; i < 7; i++) {
        for (j = i+1; j < 8; j++) {
            if (a[j] < a[i]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;

                for (int k = 0; k < 8; k++) printf("%d ", a[k]);
                printf("\n\n");
                return;
            }
        }
    }
}

void main() {
    for (int i = 0; i < 15; i++) {
        printf("Iteration Number %d\n", i + 1);
        sort();
    }
}