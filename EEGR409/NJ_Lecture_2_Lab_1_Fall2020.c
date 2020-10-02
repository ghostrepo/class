/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 2, Lab 1.1
   This program estimates female and male height based on the length of the femur and humerus bones.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    int fem = 0;
    int hum = 0;
    double fem_height_f;
    double fem_height_m;
    double hum_height_f;
    double hum_height_m;

    printf("Enter Values in Inches.\n");
    printf("Enter femur length:\n");
    scanf("%d", &fem);
    printf("Enter humerus length: \n");
    scanf("%d", &hum);

    fem_height_f = fem*1.94 + 28.7;
    fem_height_m = fem*1.88 + 32;
    hum_height_f = hum*2.8 + 28.2;
    hum_height_m = hum*2.9 + 27.9;

    printf("\nHeight Estimates in Inches \n");
    printf("Femur Female Estimate:   %1.1f \n", fem_height_f);
    printf("Femur Male Estimate:     %1.1f \n", fem_height_m);
    printf("Humerus Female Estimate: %1.1f \n", hum_height_f);
    printf("Humerus Male Estimate:   %1.1f \n", hum_height_m);
}
