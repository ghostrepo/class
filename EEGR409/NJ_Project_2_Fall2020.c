/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Project 2
   This program displays a histogram based on the frequency of various cherry tree measurements.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// WORKING
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

// WORKING
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

// WORKING
// function to read data from csv file to array
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
    // WriteData(data, data_amount);

    printf("Number of data values read: 5 banks of %d\n", data_amount);

    fclose(data_file);
    return data_amount;
}

// WORKING
// function to get minimum value of a bin
int GetMinValue (int x, int total, double data[5][1000]) {
    int i, j; 
    double h;
    j = i = 0;

        while (j < total) {
            while (i == 0) {
                h = data[x][j];
                i++;
            }
            if (h > data[x][j]) {
                h = data[x][j];
            }
            j++;
        }
        printf("\nMinimum data point: %.2f", h);

    return h;
}

// WORKING
// function to get maximum value of a bin
int GetMaxValue (int x, int total, double data[5][1000]) {
    int i, j; 
    double k;
    j = i = 0;

        while (j < total) {
            while (i == 0) {
                k = data[x][j];
                i++;
            }
            if (k < data[x][j]) {
                k = data[x][j];
            }
            j++;
        }
        printf("\nMaximum data point: %.2f\n", k);
    
    return k;
}

// WORKING
// function to calculate histogram
void CalculateHistogram(int binCount, int total, double bin[5], double data[5][1000], int data_frequency[5][20]) {
    double range, min[5], max[5];
    double binCount_ = (double) binCount;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < binCount; j++) {
            data_frequency[i][j] = 0;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        printf("\nBIN %d: ", i + 1);
        
        min[i] = GetMinValue(i, total, data);
        max[i] = GetMaxValue(i, total, data);
        bin[i] = (max[i] - min[i])/(binCount_);
        range = min[i];

        for (int k = 0; k < binCount; k++) {
            if (range <= max[i]) {
                for (int j = 0; j < total; j++) {
                    if (data[i][j] == (range) && range == min[i]) {
                            data_frequency[i][k]++;
                    }
                    if ((data[i][j] > (range)) && (data[i][j] <= (range + bin[i]))) {
                        data_frequency[i][k]++;
                    }
                }
                range = range + bin[i];
                // printf("\ndata frequency %d: %d\n", k + 1, data_frequency[i][k]);
            }
        }
    }
}

// WORKING
// function to display paginated table of each bank's data values
void DisplayData(double data[5][1000], int total) {    
    int j, k, t, counter;
    int i = 1;
    char page;
    j = k = t = counter = 0;

    printf("\n \t|     Bank 1     |     Bank 2     |     Bank 3     |     Bank 4     |     Bank 5     |\n");
    printf(" \t| -------------- | -------------- | -------------- | -------------- | -------------- |\n");
    while (counter == 0) {
        printf("\n");
        for (i = 1; i <= 12; i++) {
            t = 0;
            printf(" %d\t| %.3f \t | %.3f \t  | %.3f \t   | %.3f \t    | %.3f \t     |\n", j + 1, data[0][j], data[1][j], data[2][j], data[3][j], data[4][j]);
            j++;

            if (j == 100) {
                j = 108;
                i = 13;
            }
        }
    
        while (t == 0) {
            getchar();
            printf("\n(P)revious Page | (N)ext Page | (R)eturn: ");
            scanf("%c", &page);
            if (page == 'P' || page == 'N' || page == 'R') {
                switch (page) {
                    case 'P':
                    if (j < 13) {
                        printf("ERROR: Cannot go back from this point\n");
                    } else {
                        j = j - 24;
                        i = 1;
                        t = 1;
                    }
                    break;

                    case 'N':
                    if (j == 108) {
                        printf("ERROR: Cannot go beyond this point\n");
                    } else {
                        i = 1;
                        t = 1;
                    }
                    break;

                    case 'R':
                    t = counter = 1;
                    break;

                    default:
                    printf("\nERROR: False input or program error\n");
                    break;            
                }
            } else {
                fflush(stdin);
                printf("INVALID ENTRY: Press Enter to Continue\n"); 
                continue;
            }
        }
    }
}

// function to display the graph
void DisplayHistogram(int binCount, int data_frequency[5][20], double bin[5]) {
    double min, max;
    int count, k, looper;

    printf("\t\t\t\t\t\tHEIGHT OF BLACK CHERRY TREES\t\t\t\t\t\t\n");
    printf("------------------------------------------------------------------------------------------------------------------------------\n");

    for (int j = 0; j < binCount; j++) {
        printf("\nBIN %d", j+1);

        for (int i = 0; i < 5; i++) {
            looper = 0;

            if (looper == 0) {
                printf("\tB%d: ", i + 1);
                k = count = data_frequency[i][j];
                looper++;
            }
            while (count != 0) {
                switch (i) {
                    case 0:
                    printf("%c", 177);
                    break;

                    case 1:
                    printf("%c", 219);
                    break;

                    case 2:
                    printf("%c", 176);
                    break;

                    case 3:
                    printf("%c", 178);
                    break;
                    
                    case 4:
                    printf("%c", 177);
                    break;

                    default:
                    break;
                }
                count--;
            }
            if (count == 0) {
                if (k != 0) {
                    printf(" (%d)\n\n", k);
                } else {
                    printf("\n\n");
                }
            }
        }
    }
}

 
// WORKING
// function to exit the program
void exitMenu() {
    getchar();
}

void main() {
    printf("\t\tPROJECT 2: Cherry Tree Measurement Catalog System\t\t\n");
    printf("----------------------------------------------------------------------------------");

    int menuChoice, binCount, esc, total, data_frequency[5][20];
    double bin[5], max[5], min[5], data[5][1000];
    binCount = 12;
    esc = 1;
    menuChoice = total = 0;

    for (int i = 0; i < 5; i++) {
        bin[i] = 0;
    }

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
                    if (total == 0) {
                        printf("ERROR: Must Load Data\n");
                        menuChoice = 0;
                    } else {
                        DisplayData(data, total);
                        menuChoice = 0;
                    }
                    break;

                    case 4: 
                    if (total == 0) {
                        printf("ERROR: Must Load Data\n");
                        menuChoice = 0;
                    } else {
                        CalculateHistogram(binCount, total, bin, data, data_frequency);
                        menuChoice = 0;
                    }
                    break;

                    case 5:
                    if (bin[0] == 0) {
                        printf("ERROR: Must Calculate Histogram\n");
                        menuChoice = 0;
                    } else {
                        DisplayHistogram(binCount, data_frequency, bin);
                        menuChoice = 0;
                        esc = 0;
                    }
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

// // WORKING
// void WriteData(double data[5][1000], int total) {
//     FILE *data_output;
//     int i = 0;

//     data_output = fopen("NJ_Project_data_out.txt", "r+");

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < total; j++) {
//             fprintf(data_output, "%f\n", data[i][j]);
//         }
//     }

//     fclose(data_output);
// }
