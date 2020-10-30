/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Project 1
   This program .

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>

// function to display the main menu 
int showMenu() {
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
int setBins() {
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
            binCount = 0;
            x = 1;
            // showMenu();
            break; 

            default:
            printf("INVALID CHOICE: Please enter a choice between 1 and 4\n");
        }
    }

    return binCount;

}

// function to calculate histogram
void calcHist(int binCount) {
    int h, k;
    float data[100];

    printf("\nMinimum data point: %.2f", data[h]);
    printf("\nMaximum data point: %.2f", data[k]);



}

// function to display the graph
void showGraph(int binCount) {
    char graph;
    int i = 0;
    // int graph;

    // graph = getchar();

    while (i == 0) {
        printf("Display (H)orizontal or (V)ertical graph (extra credit): ");
        scanf("%s", &graph);
        if (graph == 'H' || graph == 'h') {
            if (binCount == 3) {
                i = 1;
                printf("GRAPH 1\n");
            }

            if (binCount == 6) {
                i = 1;
                printf("GRAPH 2\n");
            }

            if (binCount == 12) {
                i = 1;
                printf("GRAPH 3\n");
            }
        }
        if (graph == 'V' || graph == 'v') {
            if (binCount == 3) {
                i = 1;
                printf("GRAPH 4\n");            
            }

            if (binCount == 6) {
                i = 1;
                printf("GRAPH 5\n");
            }

            if (binCount == 12) {
                i = 1;
                printf("GRAPH 6\n");
            }   
        } 
        if (graph != 'H' && graph != 'h' && graph != 'V' && graph != 'v') {
            printf("INVALID INPUT: Please enter \"H\" or \"V\"\n");
        }
        // getchar();
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
    esc = 1;

    while (esc == 1) {
        menuChoice = showMenu();
        while (menuChoice >= 1 && menuChoice <= 5 ) {
            if (menuChoice >= 1 && menuChoice <= 5) {
                switch (menuChoice) {           
                    case 1: 
                        binCount = setBins(menuChoice);
                        switch (binCount) {
                            case 3:
                            menuChoice = 0;
                            // showMenu();
                            break;

                            case 6: 
                            menuChoice = 0;
                            // showMenu();
                            break;

                            case 12:
                            menuChoice = 0;
                            // showMenu();
                            break;

                            case 0:
                            menuChoice = 0;
                            // showMenu();

                            default:
                            break;
                        }
                    break;

                    case 2:
                        // binCount = setBins();
                        calcHist(binCount);
                    break;

                    case 3:
                        showGraph(binCount);
                        menuChoice = 0;
                    break;

                    case 4: 
                        expGraph();
                    break;

                    case 5:
                    menuChoice = 0;
                    esc = 0;
                    exitMenu();
                    break;

                    default:
                    printf("INVALID CHOICE: Please enter a choice between 1 and 5\n");
                }
            }
        }
    }
}


// void menuChoice() {
//     int menuChoice, binCount;
//     menuChoice = showMenu();
//     // while (menuChoice >= 1 && menuChoice <= 5 ) {
//         switch (menuChoice) {           
//             case 1: 
//             setBins(menuChoice);
//             break;

//             case 2:
//             binCount = setBins();
//             calcHist(binCount);
//             break;

//             case 3:
//             showGraph();
//             break;

//             case 4: 
//             expGraph();
//             break;

//             case 5:
//             exitMenu();
//             break;

//             default:
//             printf("INVALID CHOICE: Please enter a choice between 1 and 5\n");
//         }
//     // }
    // if (menuChoice < 1 || menuChoice > 5) {
    //     showMenu();
    // }
// }