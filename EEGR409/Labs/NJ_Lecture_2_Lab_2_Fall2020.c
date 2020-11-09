/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 2, Lab 2
   This program calculates a linear intterpolation of freezing temperate with respect to salinity.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double b;
    double c;
    double f_a;
    double f_b;
    double f_c;

    printf("Enter salinity(in ppt) for Point A: \n");
    scanf("%d", &a);
    printf("Enter freezing temperature(in degrees F) for Point A: \n");
    scanf("%lf", &f_a);

    printf("Enter salinity(in ppt) for Point C: \n");
    scanf("%d", &c);
    printf("Enter freezing temperature(in degrees F) for Point C: \n");
    scanf("%lf", &f_c);

    printf("Enter salinity(in ppt) for Point B: ");
    scanf("%d", &b);

    f_b = (((b - a)/(c - a))*(f_c - f_a)) + f_a;

    printf("\nEstimated freezing temperature for water with a %d salinity is: %2d degrees Farenheight", b, f_b);

    return 1;
}