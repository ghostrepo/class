/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 5, Lab 3
   This program displays a user's input after 'enter' is pressed.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    char c;
    int i = 0;
    int s;

    while (i == 0) {
        printf("Enter a character: ");
        scanf("%c", &c);
        getchar();

        printf("Click enter to view \n");
        getchar();

        // printf("%d\n", s);
        // for (i = 0; i <= s; i++) {
        printf("You entered: %c\n", c);
        
        if (c == 0) {
            i = 1;
        }
    }    
}