/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Quiz 6

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {
    int p[100] ;
    int i = 0;
    int j = 0;

for (int i = 0; i < 100; i++) {
    p[i] = 0;
}


    printf("Enter a phrase: ");
    while (i == 0) {
        scanf("%d", &p[j]);
        j++;
        if (p[j] == 0) {
            i = 1;
        }
    }

    j = 0;
    while (p[j] > 0) {
        printf("%d\n", p[j]);
        j++; 
    }

    i = 0;
    p[i] = p[i] - 32;
    while (p > 0) {
        printf("%d = %c", p[i], p[i]);
    }
}
