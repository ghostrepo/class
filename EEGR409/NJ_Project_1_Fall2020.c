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
            showMenu();
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

    printf("Display (H)orizontal or (V)ertical graph (extra credit): ");
    scanf("%c", &graph);
    // if (graph == "H" || graph == "h") {
    //     if (binCount == 3) {
            
    //     }

    //     if (binCount == 6) {

    //     }

    //     if (binCount == 12) {

    //     }
    // }
    // if (graph == "V" || graph == "v") {
    //     if (binCount == 3) {
            
    //     }

    //     if (binCount == 6) {

    //     }

    //     if (binCount == 12) {

    //     }   
    // }
    // else {
    //     printf("INVALID INPUT: Please enter \"H\" or \"V\"\n");
    // }
    

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

    int menuChoice, binCount;
    menuChoice = showMenu();


    while (menuChoice >= 1 && menuChoice <= 5 ) {
        if (menuChoice >= 1 && menuChoice <= 5) {
            switch (menuChoice) {           
                case 1: 
                binCount = setBins(menuChoice);
                switch (binCount) {
                    case 3:
                    menuChoice = 0;
                    showMenu();
                    break;

                    case 6: 
                    menuChoice = 0;
                    showMenu();
                    break;

                    case 12:
                    menuChoice = 0;
                    showMenu();
                    break;

                    case 0:
                    // menuChoice = 0;
                    showMenu();

                    default:
                    break;
                }
                break;

                case 2:
                binCount = setBins();
                calcHist(binCount);
                break;

                case 3:
                showGraph(binCount);
                break;

                case 4: 
                expGraph();
                break;

                case 5:
                menuChoice = 0;
                exitMenu();
                break;

                default:
                printf("INVALID CHOICE: Please enter a choice between 1 and 5\n");
            }
            
        }
    }
    // showMenu();
    // menuChoice();

    
    
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