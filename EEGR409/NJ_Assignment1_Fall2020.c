// /* Name: Noah Johnson
//    Class: EEGR409.001 - C Programming
//    Assignment 1
//    This program displays the molecular weights of various chemical compounds
//    https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

// */

#include <stdio.h>

void main() {
    #define O 15.9994
    #define C 12.011
    #define N 14.00674
    #define S 32.066
    #define H 1.00794

    float m1;
    float m2;
    float m3;

    m1 = 2*O + 2*C + 1*N + 5*H;
    m2 = 4*O + 5*C + 1*N + 8*H;
    m3 = 3*O + 5*C + 2*N + 10*H;

    printf("Assignment 1: Amino Acid Molecular Weights\n");
    printf("------------------------------------------\n");
    printf("Molecular Weight of Glycine: %10.2f\n", m1);
    printf("Molecular Weight of Glutamic: %10.2f\n", m2);
    printf("Molecular Weight of Glutamine: %10.2f", m3);
}

/*
    Assignment 1: Amino Acid Molecular Weights
    ------------------------------------------
    Molecular Weight of Glycine:   75.07
    Molecular Weight of Glutamic:  146.12
    Molecular Weight of Glutamine: 146.15
*/