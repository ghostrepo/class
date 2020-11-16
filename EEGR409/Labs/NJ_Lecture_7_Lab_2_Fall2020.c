/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 7, Lab 2
   This program computes the average of an array of 5 floating point numbers.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <windows.h>


double getAvg(double arr[], int count) {
    double x, avg, length;
    count = 5;
    length = (double) count;
    x = 0;

    for (int i = 0; i < count; i++) {
        x = x + arr[i];
    }

    avg = x / length;

    return avg;
}

void main() {
    double avg, array[5];
    int length = 5;

    printf("Enter 5 numbers, separated by spaces: ");
    for (int i = 0; i < length; i++) {
        scanf("%lf", &array[i]);
    }

    avg = getAvg(array, length);

    printf("\nThe average of the %d numbers is %.4f", length, avg);
}