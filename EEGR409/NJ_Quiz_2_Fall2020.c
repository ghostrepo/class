/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Quiz 2
   This program .
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>

void main() {
    double f1, f2, f3, f4, f5, c1, c2, c3, c4, c5;
    c1 = c2 = c3 = c4 = c5 = 0;
    double ratio = 5/9;

    printf("Enter 5 temperature values in degrees Fahrenheit(separated by spaces): ");
    scanf("%lf %lf %lf %lf %lf", &f1, &f2, &f3, &f4, &f5);


    c1 = (f1 - 32);
    c1 = (5 * c1)/9;

    c2 = (f2 - 32);
    c2 = (5 * c2)/9;

    c3 = (f3 - 32);
    c3 = (5 * c3)/9;

    c4 = (f4 - 32);
    c4 = (5 * c4)/9;

    c5 = (f5 - 32);
    c5 = (5 * c5)/9;


    printf("Temperature Values\n");
    printf("\t\tFahrenheit\tCelsius\n");
    printf("\t\t----------\t---------\n");
    printf("Data point 1    |   %.1f |\t| %.2f |\n", f1, c1);
    printf("Data point 2    |   %.1f |\t| %.2f |\n", f2, c2);
    printf("Data point 3    |   %.1f |\t| %.2f  |\n", f3, c3);
    printf("Data point 4    |   %.1f |\t| %.2f |\n", f4, c4);
    printf("Data point 5    |   %.1f |\t| %.2f |\n", f5, c5);
}