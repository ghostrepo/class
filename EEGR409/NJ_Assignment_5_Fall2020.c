/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Assignment 5
   This program creates a histogram for a data set.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>

void main() {
    int m[50], a[10]; // m[50] - array for data set, a[10] - array for data frequency
    int b, c, d, j; // b - counter for data frequency array, c - counter for setting data frequency array to zero, d - counter for histogram loop, j - counter for data set array
    b = c = d = j = 0;
    for (c = 0; c < 10; c++) {
        a[c] = 0;
    }
    printf("Paste values here:\n");
    for (int i = 0; i <= 49; i++) {
        scanf("%d", &m[i]);
    }

    // this (for) loop counts and records the frequency of each integer in the data set
    for (j = 0; j < 50; j++) {
        for (int t = 0; t <= 10; t++) {
            if (m[j] == (t + 1)) {
                a[t]++;
            }
        }
    }

    printf("\nAssignment 5: Histogram Plot\n");
    printf("----------------------------\n\n");
   
   // this loop creates the histogram for the data set
    while (b <= 9) {
        if (d < a[b]) {
            if (d == 0) {
                printf("\t%d ", (b + 1));
            }
            printf("*");
            d++;
        }
        if (d == a[b]) {
            printf(" (%d)\n", d);
            d = 0;
            b++;
        }
    }

    // this loop creates the vertical histogram for the data set
    while (b <= 9) {
        if (d < a[b]) {
            if (d == 0) {
                printf("\t%d ", (b + 1));
            }
            printf("*");
            d++;
        }
        if (d == a[b]) {
            printf(" (%d)\n", d);
            d = 0;
            b++;
        }
    }
}
// 8 1 2 7 10 1 8 8 6 8 1 5 8 7 9 6 1 10 6 8 9 7 7 6 8 6 5 6 10 3 7 1 7 6 5 4 8 5 5 9 7 1 1 3 10 4 6 3 4 4