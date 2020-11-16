/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 7, Lab 3
   This program computes the average of an array of 10 or less floating point numbers.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <windows.h>


double getAvg(double arr[], int count) {
    double x, avg, length;
    int i;
    count = 10;
    x = 0;

    for (i = 0; i < count; i++) {
        if (arr[i] >= 0) {
            x = x + arr[i];
        } else {
            count = i;
            length = (double) i;
        }
    }

    avg = x / length;

    return avg;
}

void main() {
    double avg, array[10];
    int length = 10;

    printf("Enter 10 or less numbers,\nEnter a negative number to indicate you are finished: ");
    for (int i = 0; i < length; i++) {
        scanf("%lf", &array[i]);
        if (array[i] < 0) {
            length = i;
        }
    }

    avg = getAvg(array, length);
    printf("\nThe average of the %d numbers is %.4f", length, avg);
}