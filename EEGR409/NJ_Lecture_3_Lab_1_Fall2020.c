/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 3, Lab 1
   This program receives and prints the highest number out of a three number sequence.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>

int main() {
    double n1, n2, n3;

    printf("Enter three numbers, separated by commas: ");
    scanf("%lf, %lf, %lf", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) {                                    // Checks if n1 is highest
        printf("The largest number is: %f", n1);
    } else if (n2 > n1 && n2 > n3) {                             // Checks if n2 is highest
        printf("The largest number is: %f", n2);
    } else if (n3 > n2 && n3 > n1) {                            // Checks if n3 is highest
        printf("The largest number is: %f", n3);
    } else if (n1 == n2 && n1 > n3) {                           // Checks if n1 and n2 is highest
        printf("The largest number is: %f", n1);
    } else if (n1 == n3 && n1 > n2) {                           // Checks if n1 and n3 is highest
        printf("The largest number is: %f", n1);
    } else if (n3 == n2 && n2 > n1) {                           // Checks if n2 and n3 is highest
        printf("The largest number is: %f", n2);
    } else if (n1 == n2 && n1 == n3) {                          // Checks if n1 = n2 = n3 is highest
        printf("All numbers are equal");
    } else {
        printf("An error occured.");
    }
    return 0;
}