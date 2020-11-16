/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 7, Lab 4
   This program computes the average of an array of 10 or less floating point numbers.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <windows.h>

int getInput(double arr[]) {
    int length;

    printf("Enter 10 or less numbers,\nEnter a negative number to indicate you are finished: ");
    for (int i = 0; i < length; i++) {
        scanf("%lf", &arr[i]);
        if (arr[i] < 0) {
            length = i;
        }
    }

    return length;
}

double getAvg(double arr[], int count) {
    double x, avg, length;
    int i;
    x = 0;

    for (i = 0; i < count; i++) {
        if (arr[i] >= 0) {
            x = x + arr[i];
        } 
    }

    length = (double) count;
    avg = x / length;

    return avg;
}

void main() {
    double avg, array[10];
    int length = 10;

    length = getInput(array);
    avg = getAvg(array, length);

    printf("\nThe average of the %d numbers is %.4f", length, avg);
}