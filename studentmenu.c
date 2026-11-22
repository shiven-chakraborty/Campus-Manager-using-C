#include <stdio.h>
#include "campus.h"

void addStudent();
void displayStudents();
void searchStudent();
int findStudentIndex(int roll);

void studentmenu()
{
    //initializing a structure
    struct Student
    {
        int roll;
        char name[50];
        int age;
        char course[50];
        float marks;
    };

    //defining the array and a student counter
    struct Student students[100];
    int studentCount = 0;

    int choice;
    
    do
    {
        printf("\n========== STUDENT MANAGEMENT ==========\n");

        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Return to Main Menu\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            choice = 0;
            continue;
        }


        //switch case
        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3: 
            searchStudent();
            break;
        case 4:
            printf("\nGoing back to main menu\n");
            break;
        
        default:
            printf("Enter a valid value");
            break;
        }

    } while (choice != 4);
    
}