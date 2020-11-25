/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Project 2
   This program displays a histogram based on the frequency of various cherry tree measurements.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int data_f, data_f0, data_f1, data_f2, data_f3, data_f4, data_f5, data_f6, data_f7, data_f8, data_f9, data_f10;
double h, k;
FILE *data0;

// function to display the main menu 
int GetMenuChoice() {
    int x, menuChoice, binCount;
    x = 0;
    printf("\n+---------------------------------------+\n");
    printf("| \t\tMAIN MENU\t\t| \n");
    printf("+---------------------------------------+\n");
    printf("| 1) Set number of bins in histogram    |\n");
    printf("| 2) Load data                          |\n");
    printf("| 3) Display data                       |\n");
    printf("| 4) Calculate histogram                |\n");
    printf("| 5) Display graph                      |\n");
    printf("| 6) Exit                               |\n");
    printf("+---------------------------------------+\n");
    printf("Enter choice: ");
    scanf("%d", &menuChoice);

    return menuChoice;
}

// function to set number of bins in histogram
int GetNumberOfBins() {
    int binNum, binCount;
    int x = 0;
    int t = 0;

    while (x == 0) {
        printf("\n+---------------------------------------+\n");
        printf("| \t\tNUMBER OF BINS\t\t|\n");
        printf("+---------------------------------------+\n");
        printf("| 1) 3 Bins                             |\n");
        printf("| 2) 6 Bins                             |\n");
        printf("| 3) 12 Bins                            |\n");
        printf("| 4) Custom                             |\n");
        printf("| 5) Return                             |\n");
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
            while (t == 0) {
                printf("\nEnter a value between 1 and 20: ");
                int var = scanf("%d", &binCount);
                if (binCount <= 20 && binCount >= 1) {
                    t = 1;
                }
                if (var == 0 || binCount > 20 || binCount < 1) {
                    fflush(stdin);
                    printf("INVALID ENTRY\n"); 
                    continue;
                }
            }

            printf("Number of bins set to %d\n", binCount);
            x = 1;
            break; 

            case 5:
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

// function to read data
int ReadData(double data[5][1000]) {
    int i, j, total, data_amount, bank_amount;
    total = 0;
    i = j = 0;

    FILE *data_file = fopen("NJ_Project_2_data.csv", "r+");
    if (data_file == NULL) {
        printf("ERROR: File not found\n");
    } else {
        fscanf(data_file, "%lf,%lf,%lf,%lf,%lf", &data[0][j], &data[1][j], &data[2][j], &data[3][j], &data[4][j]);
        j++;
        while (fscanf(data_file, "%lf,%lf,%lf,%lf,%lf", &data[0][j], &data[1][j], &data[2][j], &data[3][j], &data[4][j]) > 0) {
            j++;
        }
    }
    data_amount = j;

    printf("Number of data values read: 5 banks of %d\n", data_amount);

    fclose(data_file);
    return data_amount;
}

int GetMinValue (FILE *data, int total) {
    int i, j, h; 
    double num;

    data = fopen("NJ_Project_2_data.txt", "r");
    if (data == NULL) {
        printf("ERROR: File not found\n");
    } else {
        while (j < total) {
            fscanf(data, "%lf", &num);
            while (i == 0) {
                h = num;
                i++;
            }
            if (h > num) {
                h = num;
            }
            j++;
        }
        printf("\nMinimum data point: %.2f", h);
    }

    fclose(data);

    return h;
}

int GetMaxValue (FILE *data, int total) {
    int k, i, j; 
    double num;

    data = fopen("NJ_Project_2_data.txt", "r");
    if (data == NULL) {
        printf("ERROR: File not found\n");
    } else {
        while (j < total) {
            fscanf(data, "%lf", &num);
            while (i == 0) {
                k = num;
                i++;
            }
            if (k < num) {
                k = num;
            }
            j++;
        }
        printf("\nMaximum data point: %.2f", k);
    }

    fclose(data);
    return k;
}

// function to calculate histogram
double CalculateHistogram(int binCount, double data[5][1000]) {
    double bin, range, min, max, data_frequency[5][20];
    int k, j, i;
    j = i = 0;

        bin = (max - min)/(binCount);
        range = min;
        while (range <= max) {
            for (int k = 0; k < binCount; k++) {
                for (j = 0; j < 100; j++) {
                    if ((data[i][j] >= (range)) && (data[i][j] <= (range + bin))) {
                        data_frequency[i][k]++;
                    }
                }
                range = range + bin; 
            // printf("data frequency %d: %d", k + 1, data_frequency[i][k]);
            }
        }

    // bin = (k - h)/(binCount);
    // data0 = fopen("NJ_Project_1_data.txt", "r+");
    // if (binCount == 3) {
    //     range = h[i];
    //     range1 = range + bin;
    //     range2 = range1 + bin;
    //     range3 = range2 + bin;
    //     j = 0;

    //     while (j < 100) {
    //         fscanf(data0, "%lf", &num);
    //         if (num >= h && num <= range1) {
    //             data_f++;
    //         }
    //         if (num >= range1 && num <= range2) {
    //             data_f0++;
    //         }
    //         if (num >= range2 && num <= k) {
    //             data_f1++;
    //         }
    //         j++;
    //     }
    // }



    // if (binCount == 12) {
    //     range = h;
    //     range1 = range + bin;
    //     range2 = range1 + bin;
    //     range3 = range2 + bin;
    //     range4 = range3 + bin;
    //     range5 = range4 + bin;
    //     range6 = range5 + bin;
    //     range7 = range6 + bin;
    //     range8 = range7 + bin;
    //     range9 = range8 + bin;
    //     range10 = range9 + bin;
    //     range11 = range10 + bin;
    //     j = 0;

    //     while (j < 100) {
    //         fscanf(data, "%lf", &num);
    //         if (num >= h && num <= range1) {
    //             data_f++;
    //         }
    //         if (num >= range1 && num <= range2) {
    //             data_f0++;
    //         }
    //         if (num >= range2 && num <= range3) {
    //             data_f1++;
    //         }
    //         if (num >= range3 && num <= range4) {
    //             data_f2++;
    //         }
    //         if (num >= range4 && num <= range5) {
    //             data_f3++;
    //         }
    //         if (num >= range5 && num <= range6) {
    //             data_f4++;
    //         }
    //         if (num >= range6 && num <= range7) {
    //             data_f5++;
    //         }
    //         if (num >= range7 && num <= range8) {
    //             data_f6++;
    //         }
    //         if (num >= range8 && num <= range9) {
    //             data_f7++;
    //         }
    //         if (num >= range9 && num <= range10) {
    //             data_f8++;
    //         }
    //         if (num >= range10 && num <= range11) {
    //             data_f9++;
    //         }
    //         if (num >= range11 && num <= k) {
    //             data_f10++;
    //         }
    //         j++;
    //     }
    // }
    fclose(data0);

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
    printf("\t\tPROJECT 2: Cherry Tree Measurement Catalog System\t\t\n");
    printf("----------------------------------------------------------------------------------");

    int menuChoice, binCount, esc, total;
    double bin, data[5][1000], data_frequency[5][20];
    binCount = 12;
    esc = 1;

    while (esc == 1) {
        menuChoice = GetMenuChoice();
        if (!menuChoice || menuChoice < 1 || menuChoice > 6) {
            fflush(stdin);
            printf("INVALID CHOICE: Please enter a choice between 1 and 5\n");
            continue;
        }
        while (menuChoice >= 1 && menuChoice <= 6 ) {
            if (menuChoice >= 1 && menuChoice <= 6) {
                switch (menuChoice) {           
                    case 1: 
                    binCount = GetNumberOfBins(menuChoice);
                    switch (binCount) {
                        case 1:
                        menuChoice = 0;
                        break;

                        case 2:
                        menuChoice = 0;
                        break;

                        case 3:
                        menuChoice = 0;
                        break;
                        
                        case 4:
                        menuChoice = 0;
                        break;
                        
                        case 5:
                        menuChoice = 0;
                        break;
                        
                        case 6:
                        menuChoice = 0;
                        break;
                        
                        case 7:
                        menuChoice = 0;
                        break;
                        
                        case 8:
                        menuChoice = 0;
                        break;
                        
                        case 9:
                        menuChoice = 0;
                        break;
                        
                        case 10:
                        menuChoice = 0;
                        break;
                        
                        case 11:
                        menuChoice = 0;
                        break;
                        
                        case 12:
                        menuChoice = 0;
                        break;
                        
                        case 13:
                        menuChoice = 0;
                        break;
                        
                        case 14:
                        menuChoice = 0;
                        break;

                        case 15: 
                        menuChoice = 0;
                        break;

                        case 16:
                        menuChoice = 0;
                        break;

                        case 17:
                        menuChoice = 0;
                        break;
                        
                        case 18:
                        menuChoice = 0;
                        break;
                        
                        case 19:
                        menuChoice = 0;
                        break;

                        case 20:
                        menuChoice = 0;
                        break;

                        case 0:
                        menuChoice = 0;

                        default:
                        break;
                    }
                    break;

                    case 2:
                    total = ReadData(data);
                    menuChoice = 0;
                    break;

                    case 3:
                    DisplayHistogram(binCount, bin);
                    menuChoice = 0;
                    break;

                    case 4: 
                    bin = CalculateHistogram(binCount, data);
                    menuChoice = 0;
                    break;

                    case 5:
                    // DisplayHistogram(binCount, bin);
                    menuChoice = 0;
                    esc = 0;
                    break;

                    case 6:
                    exitMenu();
                    menuChoice = 0;
                    esc = 0;
                    break;

                    default:
                    break;                
                }
            } 
        }
    }
}
