/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 6, Lab 2
   This program calculates the length of the hypotenuse of a right triangle.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>

double calcHypo(double a, double b) {
    double hypo = sqrt(pow(a, 2) + pow(b, 2));

    return hypo;
}

double getInput() {
    int x;
    double a, b, hypo;
    x = 0;

    printf("Enter the length of the two triangle sides, separated by a space: ");
    scanf("%lf %lf", &a, &b);

    while (x == 0) {
        if (a < 0 || a > 1000000 || b < 0 || b > 1000000) {
            printf("INVALID INPUT\nPlease enter two numbers between 0 and 1,000,000, separated by a space: ");
            scanf("%lf %lf", &a, &b);
        }
        if (a > 0 && a < 1000000 && b > 0 && b < 1000000) {
            x = 1;
        }
    }

    hypo = calcHypo(a, b);

    return hypo;
}

void main() {
    double hyp;

    hyp = getInput();

    printf("\nOUTPUT\n------\nThe hypotenuse is: %.2f", hyp);

}