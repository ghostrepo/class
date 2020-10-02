/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 1, Lab 1 (Lecture 2, Lab 0)
   This program calculates and displays the distance between two points
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    int n1;
    int n2;
    int m1;
    int m2;

    printf("Please enter values for point 1 in (x, y) format: \n");
    scanf("%d, %d", &n1, &n2);

    printf("Please enter values for a point 2 in (x, y) format: \n");
    scanf("%d, %d", &m1, &m2);

    float a1 = sqrt(pow(n1 - m1, 2) + pow(n2 - m2, 2));

    printf("The distance between point (%d, %d) and point (%d, %d) is %1.2f", n1, n2, m1, m2, a1);
}
