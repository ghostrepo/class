/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 2, Lab 1.2
   This program estimates female and male height based on the length of the femur and humerus bones.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    int fem;
    int hum;
    float fem_height_f;
    float fem_height_m;
    float hum_height_f;
    float hum_height_m;

    printf("Enter femur length in inches: \n");
    scanf("%d", &fem);

    printf("Enter humerus length in inches: \n");
    scanf("%d", &hum);

    fem_height_f = fem*1.94 + 28.7;
    fem_height_m = fem*1.88 + 32;
    hum_height_f = hum*2.8 + 28.2;
    hum_height_m = hum*2.9 + 27.9;

    printf("\nHeight Estimate in Inches\n");
    printf("\t\"Male\" \"Female\"\n");
    printf("Femur\t \\%1.1f \\ \\ %1.1f\\\n", fem_height_m, fem_height_f);
    printf("Humerus\\%1.1f \\ \\ %1.1f\\\n", hum_height_m, hum_height_f);

}
