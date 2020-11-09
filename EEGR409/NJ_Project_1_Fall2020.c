/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Project 1
   This program displays a histogram based on the frequency of various cherry tree measurements.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int data_f, data_f0, data_f1, data_f2, data_f3, data_f4, data_f5, data_f6, data_f7, data_f8, data_f9, data_f10;
double h, k;
FILE *data;

// function to display the main menu 
int GetMenuChoice() {
    int x, menuChoice, binCount;
    x = 0;
    printf("\n+---------------------------------------+\n");
    printf("| \t\tMAIN MENU\t\t| \n");
    printf("+---------------------------------------+\n");
    printf("| 1) Set number of bins in histogram    |\n");
    printf("| 2) Calculate histogram                |\n");
    printf("| 3) Display graph                      |\n");
    printf("| 4) Export histogram                   |\n");
    printf("| 5) Exit                               |\n");
    printf("+---------------------------------------+\n");
    printf("Enter choice: ");
    scanf("%d", &menuChoice);

    return menuChoice;
}

// function to set number of bins in histogram
int GetNumberOfBins() {
    int binNum, binCount;
    int x = 0;

    while (x == 0) {
        printf("\n+---------------------------------------+\n");
        printf("| \t\tNUMBER OF BINS\t\t|\n");
        printf("+---------------------------------------+\n");
        printf("| 1) 3 Bins                             |\n");
        printf("| 2) 6 Bins                             |\n");
        printf("| 3) 12 Bins                            |\n");
        printf("| 4) Return                             |\n");
        printf("+---------------------------------------+\n");
        printf("Enter choice: ");
        scanf("%d", &binNum);
        switch (binNum) {
            case 1:
            binCount = 3;
            printf("Number of bins set to %d\n", binCount);
            x = 1;
            break;

            case 2:
            binCount = 6;
            printf("Number of bins set to %d\n", binCount);
            x = 1;
            break; 

            case 3:
            binCount = 12;
            printf("Number of bins set to %d\n", binCount);
            x = 1;
            break; 

            case 4:
            binCount = 12;
            printf("Number of bins set to %d\n", binCount);
            x = 1;
            break; 

            default:
            printf("INVALID CHOICE: Please enter a choice between 1 and 4\n");
        }
    }

    return binCount;
}

// function to calculate histogram
double CalculateHistogram(int binCount) {
    double range, range1, range2, range3, range4, range5, range6, range7, range8, range9, range10, range11, bin, num;
    data_f = data_f0 = data_f1 = data_f2 = data_f3 = data_f4 = data_f5 = data_f6 = data_f7 = data_f8 = data_f9 = data_f10 = 0;
    int j, i;
    j = i = 0;

    data = fopen("NJ_Project_1_data.txt", "r");
    if (data == NULL) {
        printf("ERROR: File not found\n");
    } else {
        while (j < 100) {
            fscanf(data, "%lf", &num);
            while (i == 0) {
                h = k = num;
                i++;
            }
                if (h > num) {
                    h = num;
                }
                if (k < num) {
                    k = num;
                }
            j++;
        }
        printf("\nMinimum data point: %.2f", h);
        printf("\nMaximum data point: %.2f\n", k);
    }
    fclose(data);

    bin = (k - h)/(binCount);
    data = fopen("NJ_Project_1_data.txt", "r+");
    if (binCount == 3) {
        range = h;
        range1 = range + bin;
        range2 = range1 + bin;
        range3 = range2 + bin;
        j = 0;

        while (j < 100) {
            fscanf(data, "%lf", &num);
            if (num >= h && num <= range1) {
                data_f++;
            }
            if (num >= range1 && num <= range2) {
                data_f0++;
            }
            if (num >= range2 && num <= k) {
                data_f1++;
            }
            j++;
        }
    }

    if (binCount == 6) {
        range = h;
        range1 = range + bin;
        range2 = range1 + bin;
        range3 = range2 + bin;
        range4 = range3 + bin;
        range5 = range4 + bin;
        j = 0;

        while (j < 100) {
            fscanf(data, "%lf", &num);
            if (num >= h && num <= range1) {
                data_f++;
            }
            if (num >= range1 && num <= range2) {
                data_f0++;
            }
            if (num >= range2 && num <= range3) {
                data_f1++;
            }
            if (num >= range3 && num <= range4) {
                data_f2++;
            }
            if (num >= range4 && num <= range5) {
                data_f3++;
            }
            if (num >= range5 && num <= k) {
                data_f4++;
            }
            j++;
        }
    }

    if (binCount == 12) {
        range = h;
        range1 = range + bin;
        range2 = range1 + bin;
        range3 = range2 + bin;
        range4 = range3 + bin;
        range5 = range4 + bin;
        range6 = range5 + bin;
        range7 = range6 + bin;
        range8 = range7 + bin;
        range9 = range8 + bin;
        range10 = range9 + bin;
        range11 = range10 + bin;
        j = 0;

        while (j < 100) {
            fscanf(data, "%lf", &num);
            if (num >= h && num <= range1) {
                data_f++;
            }
            if (num >= range1 && num <= range2) {
                data_f0++;
            }
            if (num >= range2 && num <= range3) {
                data_f1++;
            }
            if (num >= range3 && num <= range4) {
                data_f2++;
            }
            if (num >= range4 && num <= range5) {
                data_f3++;
            }
            if (num >= range5 && num <= range6) {
                data_f4++;
            }
            if (num >= range6 && num <= range7) {
                data_f5++;
            }
            if (num >= range7 && num <= range8) {
                data_f6++;
            }
            if (num >= range8 && num <= range9) {
                data_f7++;
            }
            if (num >= range9 && num <= range10) {
                data_f8++;
            }
            if (num >= range10 && num <= range11) {
                data_f9++;
            }
            if (num >= range11 && num <= k) {
                data_f10++;
            }
            j++;
        }
    }
    fclose(data);

    return bin;
}

// function to display the graph
void DisplayHistogram(int binCount, double bin) {
    // char graph;
    // double num;
    int j = 0;

    printf("\t\tHEIGHT OF BLACK CHERRY TREES\t\t\n");
    printf("----------------------------------------------------------------------------------\n");
    for (int i = 0; i < binCount; i++) {
        h = h + bin;
        if (i == 0) {       
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f);
        }

        if (i == 1) {       
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f0) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f0);
        }

        if (i == 2) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f1) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f1);
        }
    
        if (i == 3) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f2) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f2);
        }

        if (i == 4) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f3) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f3);
        }

        if (i == 5) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f4) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f4);
        }

        if (i == 6) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f5) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f5);
        }

        if (i == 7) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f6) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f6);
        }

        if (i == 8) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f7) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f7);
        }

        if (i == 9) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f8) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f8);
        }

        if (i == 10) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f9) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f9);
        }

        if (i == 11) {      
            j = 0;
            if (j == 0) {
                printf("%.2f ", h);
            }
            while (j < data_f10) {
                printf("*");
                j++;
            }
            printf(" (%d)\n", data_f10);
        }
    }
}

// function to export histogram file
void expGraph() {
}
 
// function to exit the program
void exitMenu() {
    getchar();
}

void main() {
    printf("\t\tPROJECT 1: Cherry Tree Measurement Catalog System\t\t\n");
    printf("----------------------------------------------------------------------------------");

    int menuChoice, binCount, esc;
    binCount = 12;
    double bin;
    esc = 1;

    while (esc == 1) {
        menuChoice = GetMenuChoice();
        if (menuChoice < 1 || menuChoice > 5) {
            printf("INVALID CHOICE: Please enter a choice between 1 and 5\n");
        }
        while (menuChoice >= 1 && menuChoice <= 5 ) {
            if (menuChoice >= 1 && menuChoice <= 5) {
                switch (menuChoice) {           
                    case 1: 
                    binCount = GetNumberOfBins(menuChoice);
                    switch (binCount) {
                            case 3:
                            menuChoice = 0;
                            break;

                            case 6: 
                            menuChoice = 0;
                            break;

                            case 12:
                            menuChoice = 0;
                            break;

                            case 0:
                            menuChoice = 0;

                            default:
                            break;
                        }
                    break;

                    case 2:
                    bin = CalculateHistogram(binCount);
                    menuChoice = 0;
                    break;

                    case 3:
                    DisplayHistogram(binCount, bin);
                    menuChoice = 0;
                    break;

                    case 4: 
                    expGraph();
                    menuChoice = 0;
                    break;

                    case 5:
                    menuChoice = 0;
                    esc = 0;
                    exitMenu();
                    break;

                    default:
                    break;                
                }
            } 
        }
    }
}
