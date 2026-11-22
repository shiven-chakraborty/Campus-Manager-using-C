#include <stdio.h>
#include "campus.h"

#define MAX_STUDENTS 100

void mainmenu();


int main()
{
    mainmenu();

    return 0;
}



// MAIN MENU FUNCTION
void mainmenu()
{
    int choice;
    do
    {
        printf("\n========================================\n \tCAMPUS MANAGER\n\n \tCOLLEGE MANAGEMENT SYSTEM\n ========================================\n\n");

        printf(" 1. Student Management\n 2. Academic Management\n 3. Library Management\n 4. Display All Records\n 5. Exit\n\n Enter your choice: ");

        // confirming if the choice entered is an integer only
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            choice = 0;

            continue;
        }

        // switch case
        switch (choice)
        {
        case 1:
            studentmenu();
            break;
        case 2:
            academicmenu();
            break;
        case 3:
            librarymenu();
            break;
        case 4:
            displayallrecords();
            break;
        case 5:
            printf("Thank you for using our app");
            break;

        default:
            printf("\nEnter a valid value\n");
        }

    } while (choice != 5);
}
