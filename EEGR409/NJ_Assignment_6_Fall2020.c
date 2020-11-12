/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Assignment 6
   This program.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <stdlib.h>
// #include <windows.h>

FILE *data0, *data1, *data2; 

void ReadData(FILE *data, double f_a[]) {
    int j = 0;
    if (data == NULL) {
        printf("ERROR: File not found\n");
    } else {
        fscanf(data, "%lf", &f_a[0]);
        j++;
        while (fscanf(data, "%lf", &f_a[j]) > 0) {
            j++;
        }
        printf("ARR Length: %d\n", j);
    }  
}

int CombineData(double arr0[], double arr1[], double arr2[], double combined[]) {
    int i, j;
    i = j = 0;

    while (arr0[i] > 0) {
        if (arr0[i] > 0) {
            printf("Value %d: %f\n", i, arr0[i]);
            combined[j] = arr0[i];
            i++;
        }
    }
    printf("1: %d\n", i);

    // i = 0;
    // while (arr1[i] > 0) {
    //     combined[j] = arr1[i];
    //     i++;
    //     j++;
    // }
    // printf("1: %d\n", i);

    // i = 0;
    // while (arr2[i] > 0) {
    //     combined[j] = arr2[i];
    //     i++;
    //     j++;
    // }
    // printf("1: %d\n", i);
    
    // printf("Big ARR Length: %d\n", j);
    return j;
}

void WriteData() {
    
}

void main() {
    double x_a[20], y_a[20], z_a[20], a[20];
    int i, j;

    data0 = fopen("NJ_A6_data0.txt", "r");
    data1 = fopen("NJ_A6_data1.txt", "r");
    data2 = fopen("NJ_A6_data2.txt", "r");
    ReadData(data0, x_a);
    ReadData(data1, y_a);
    ReadData(data2, z_a);
    j = CombineData(x_a, y_a, z_a, a);

    i = 0;
    // while (x_a[i] > 0) {
    //     printf("%d: %.2f\n", i, x_a[i]);
    //     i++;
    // }

    // i = 0;
    // while (y_a[i] > 0) {
    //     printf("%d: %.2f\n", i, y_a[i]);
    //     i++;
    // }

    // i = 0;
    // while (z_a[i] > 0) {
    //     printf("%d: %.2f\n", i, z_a[i]);
    //     i++;
    // }

    // for (int k = 0; k <= j; k++) {
    //     printf("\n%f", a[k]);
    // }

    fclose(data0);
    fclose(data1);
    fclose(data2);




}   