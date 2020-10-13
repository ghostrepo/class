/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Assignment 4
   This program calculates loan balance in 1 month iterations.
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
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &m[0], &m[1], &m[2], &m[3], &m[4], &m[5], &m[6], &m[7], &m[8], &m[9], &m[10], &m[11], &m[12], &m[13], &m[14], &m[15], &m[16], &m[17], &m[18], &m[19], &m[20], &m[21], &m[22], &m[23], &m[24], &m[25], &m[26], &m[27], &m[28], &m[29], &m[30], &m[31], &m[32], &m[33], &m[34], &m[35], &m[36], &m[37], &m[38], &m[39], &m[40], &m[41], &m[42], &m[43], &m[44], &m[45], &m[46], &m[47], &m[48], &m[49]);

    // this (for) loop counts and records the frequency of each integer in the data set
    for (j = 0; j < 50; j++) {
        if (m[j] == 1) {
            a[0]++;
        }
        if (m[j] == 2) {
            a[1]++;
        }
        if (m[j] == 3) {
            a[2]++;
        }
        if (m[j] == 4) {
            a[3]++;
        }
        if (m[j] == 5) {
            a[4]++;
        }
        if (m[j] == 6) {
            a[5]++;
        }
        if (m[j] == 7) {
            a[6]++;
        }
        if (m[j] == 8) {
            a[7]++;
        }
        if (m[j] == 9) {
            a[8]++;
        }
        if (m[j] == 10) {
            a[9]++;
        }
    }

    printf("\nAssignment 5: Histogram Plot\n");
    printf("----------------------------\n\n");
   
   // this loop creates the histogram for the data set
    while (b <= 9) {
        if (d < a[b]) {
            if (d == 0) {
                printf("\t%d ", b);
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