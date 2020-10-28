/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Quiz 5
   This program .
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h> 
#include <string.h>

void main () {
   double a, amt, amt2;
   int n, m;
   m = 0;
   n = 1;
   a = 10;


   printf("Enter a dollar amount: ");
   scanf("$%lf", &amt);

   m = fabs(amt/a);
   if (m == 0) {
         printf("The number of digits is %d", n); 
         printf("\nPress any key to continue . . . ");
         getchar();
   }
   
   while (m > 0) {
      if (m >= 1  && m < 10) {
         n++;
         printf("The number of digits is %d", n); 
         printf("\nPress any key to continue . . . ");
         getchar();
         m = 0;
      }
      if (m >= 10) {
         m = m/a;
         n++;
      }
   }
}