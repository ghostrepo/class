/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 3, Lab 2
   This program .
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    double e1, e2, e3, n1, n2, n3, r1, r2, r3, d1, d2, d3; // e - eye distance, n - nose to chin distance, r - ratios, d - difference between ratios
    
    printf("IMAGE 1\n-------\nPlease enter outer eye distance(in cm) and nose-chin distance(in cm), separated by a space: ");
    scanf("%lf %lf", &e1, &n1);
    printf("\nIMAGE 2\n-------\nPlease enter outer eye distance(in cm) and nose-chin distance(in cm), separated by a space: ");
    scanf("%lf %lf", &e2, &n2); 
    printf("\nIMAGE 3\n-------\nPlease enter outer eye distance(in cm) and nose-chin distance(in cm), separated by a space: ");
    scanf("%lf %lf", &e3, &n3);
    
    
    r1 = e1/n1;
    r2 = e2/n2;
    r3 = e3/n3;
    d1 = fabs(r1 - r2);    
    d2 = fabs(r1 - r3);
    d3 = fabs(r2 - r3);

    if (d1 < d2 && d1 < d3) {
        printf("The best match is between images 2 and 3\n");
    }
    if (d2 < d1 && d2 < d3) {
        printf("The best match is between images 1 and 3\n");
    }
    if (d3 < d1 && d3 < d2) {
        printf("The best match is between images 1 and 2\n");
    }
}