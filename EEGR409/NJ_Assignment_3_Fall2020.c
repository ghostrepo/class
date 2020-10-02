/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Assignment 3
   This program provides the amino acids that meet the search requirements based on user input.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>

void main() {
    #define O 15.9994
    #define C 12.011
    #define N 14.00674
    #define S 32.066
    #define H 1.00794
    
    float a1, b1, c1, d1, e1, f1, g1, avg_weight;
    a1 = b1 = c1 = d1 = e1 = f1 = g1 = avg_weight = 0 ;
    int m0, m1, m2, m3, m4, n0, n1, n2, n3, n4;
    int d = 0;

    printf("Assignment 3: Query Amino Acid Molecules\n");
    printf("------------------------------------------\n");
    printf("Enter range for Oxygen (min max): ");
    scanf("%d %d", &m0, &n0);
    printf("\nEnter range for Carbon (min max): ");
    scanf("%d %d", &m1, &n1);
    printf("\nEnter range for Nitrogen (min max): ");
    scanf("%d %d", &m2, &n2);
    printf("\nEnter range for Sulfer (min max): ");
    scanf("%d %d", &m3, &n3);
    printf("\nEnter range for Hydrogen (min max): ");
    scanf("%d %d", &m4, &n4);
    printf("\nSearch Results: \n");

// This section provides the amino acids that the search provided along with the respective molecular weight.
    if ((m0 <= 2 && 2 <= n0) && (m1 <= 3 && 3 <= n1) && (m2 <= 1 && 1 <= n2) && (m3 <= 0 && 0 <= n3) && (m4 <= 7 && 7 <= n4)) {
        a1 = 2*O + 3*C + 1*N + 0*S + 7*H;
        printf("\t\tAlanine (%.2f)\n", a1);
    }
    if ((m0 <= 2 && 2 <= n0) && (m1 <= 6 && 6 <= n1) && (m2 <= 4 && 4 <= n2) && (m3 <= 0 && 0 <= n3) && (m4 <= 15 && 15 <= n4)) {
        b1 = 2*O + 6*C + 4*N + 0*S + 15*H;
        printf("\t\tArginine (%.2f)\n", b1);
    }
    if ((m0 <= 3 && 3 <= n0) && (m1 <= 4 && 4 <= n1) && (m2 <= 2 && 2 <= n2) && (m3 <= 0 && 0 <= n3) && (m4 <= 8 && 8 <= n4)) {
        c1 = 3*O + 4*C + 2*N + 0*S + 8*H;
        printf("\t\tAsparagine (%.2f)\n", c1);
    }
    if ((m0 <= 4 && 4 <= n0) && (m1 <= 4 && 4 <= n1) && (m2 <= 1 && 1 <= n2) && (m3 <= 0 && 0 <= n3) && (m4 <= 6 && 6 <= n4)) {
        d1 = 4*O + 4*C + 1*N + 0*S + 6*H;
        printf("\t\tAspartic (%.2f)\n", d1);
    }
    if ((m0 <= 2 && 2 <= n0) && (m1 <= 3 && 3 <= n1) && (m2 <= 1 && 1 <= n2) && (m3 <= 1 && 1 <= n3) && (m4 <= 7 && 7 <= n4)) {
        e1 = 2*O + 3*C + 1*N + 1*S + 7*H;
        printf("\t\tCysteine (%.2f)\n", e1);
    }
    if ((m0 <= 4 && 4 <= n0) && (m1 <= 5 && 5 <= n1) && (m2 <= 1 && 1 <= n2) && (m3 <= 0 && 0 <= n3) && (m4 <= 8 && 8 <= n4)) {
        f1 = 4*O + 5*C + 1*N + 0*S + 8*H;
        printf("\t\tGlutamic (%.2f)\n", f1);
    }
    if ((m0 <= 3 && 3 <= n0) && (m1 <= 5 && 5 <= n1) && (m2 <= 2 && 2 <= n2) && (m3 <= 0 && 0 <= n3) && (m4 <= 10 && 10 <= n4)) {
        g1 = 3*O + 5*C + 2*N + 0*S + 10*H;
        printf("\t\tGlutamine (%.2f)\n", g1);
    }

// This section provides a counter for the amount of amino acids that the search provided.
    if (a1 != 0) {
        d++;
    }
    if (b1 != 0) {
        d++;
    }
    if (c1 != 0) {
        d++;
    }
    if (d1 != 0) {
        d++;
    }
    if (e1 != 0) {
        d++;
    }
    if (f1 != 0) {
        d++;
    }
    if (g1 != 0) {
        d++;
    }

    if (d == 0) {
        printf("\t\tNO RESULTS");
    } else {   
        avg_weight = (a1 + b1 + c1 + d1 + e1 + f1 + g1)/d;
        printf("Average molecular weight of resulting amino acids is: %.2f", avg_weight);
    }
}

// int a[5] = {2, 3, 1, 0, 7};
// int b[5] = {2, 6, 4, 0, 15};
// int c[5] = {3, 4, 2, 0, 8};
// int d[5] = {4, 4, 1, 0, 6};
// int e[5] = {2, 3, 1, 1, 7};
// int f[5] = {4, 5, 1, 0, 8};
// int g[5] = {3, 5, 2, 0, 10};

/*
    Assignment 3: Query Amino Acid Molecules
    ------------------------------------------
    Enter range for Oxygen (min max): 
    Enter range for Carbon (min max): 
    Enter range for Nitrogen (min max): 
    Enter range for Sulfer (min max): 
    Enter range for Hydrogen (min max): 

    Search Results: 
            Glutamic (146.12)
            Glutamine (146.15)
    Average molecular weight of resulting amino acids: 
*/

