/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Assignment 6
   This program reads data from three separate files and
   combines the files so that they can be plotted in Microsoft Excel.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>

FILE *data0, *data1, *data2, *data_out; 

void ReadData(FILE *data, double f_a[]) {
    int j = 0;
    for (int i = 0; i < 100; i++) {
        f_a[i] = 0;
    }

    if (data == NULL) {
        printf("ERROR: File not found\n");
    } else {
        fscanf(data, "%lf", &f_a[0]);
        j++;
        while (fscanf(data, "%lf", &f_a[j]) > 0) {
            j++;
        }
    }  
}

int CombineData(double arr0[], double arr1[], double arr2[], double combined[]) {
    int i, j;
    i = j = 0;

    while (arr0[i] > 0) {
        combined[j] = arr0[i];
        i++;
        j++;
    }

    i = 0;
    while (arr1[i] > 0) {
        combined[j] = arr1[i];
        i++;
        j++;
    }

    i = 0;
    while (arr2[i] > 0) {
        combined[j] = arr2[i];
        i++;
        j++;
    }
    
    return j;
}

void WriteData(FILE *data_output, double combined[], double t[], int j) {
    double k = 0;
    for (int i = 0; i < j; i++) {
        t[i] = -6 + k;
        k = k + 0.5;
    }

    for (int i = 0; i < j; i++) {
        fprintf(data_output, "%.1f, %f\n", t[i], combined[i]);
    }
}

void main() {
    double x_a[100], y_a[100], z_a[100], a[100], t[100];
    int i, j;

    data0 = fopen("NJ_A6_data0.txt", "r");
    data1 = fopen("NJ_A6_data1.txt", "r");
    data2 = fopen("NJ_A6_data2.txt", "r");
    data_out = fopen("combined_data.csv", "r+");

    ReadData(data0, x_a);
    ReadData(data1, y_a);
    ReadData(data2, z_a);
    j = CombineData(x_a, y_a, z_a, a);
    WriteData(data_out, a, t, j);

    fclose(data0);
    fclose(data1);
    fclose(data2);
    fclose(data_out);
}   