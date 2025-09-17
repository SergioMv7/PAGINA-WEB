#include <stdio.h>
#include <string.h>
#include <windows.h> // To use Sleep() function.

char email_adress1[1];
char email_adress2[1];
char password1[1];
char password2[1];

int main(void){
    int choice; //Choice of a number from menu.
    int isvalidchoice = 0;
    do {
        printf("=== Menu ===\n");
        printf("1. Log in\n2. Register\n3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter your email: ");
                scanf(" %s", &email_adress1);
                printf("Enter your password: ");
                scanf(" %s", &password1);
                isvalidchoice = 1;
                break;
            case 2:
                do {
                    printf("Enter your email: ");
                    scanf(" %s", &email_adress1);
                    printf("Enter your email again: ");
                    scanf(" %s", &email_adress2);
                    printf("Enter your password: ");
                    scanf(" %s", &password1);
                    printf("Enter your password again: ");
                    scanf(" %s", &password2);
                    
                    if(email_adress1 == email_adress2 && password1 == password2 )
                    printf("Information succesfully recorded.");
                    else
                    printf("Error, try again.");
                }
                while (strcmp(email_adress1, email_adress2) != 0 && strcmp(password1, password2) != 0);
                isvalidchoice = 1;
                break;
            case 3:
                printf("Bye!\n");
                isvalidchoice = 1;
                break;
            default:
                printf("Error! Incorrect choice, please try again.\n\nTo go back to the menu, press enter.\n\n");
                while (getchar() != '\n' && getchar() != EOF);
                Sleep(1000);
                break;
        }
    }
    while (isvalidchoice == 0);

    return 0;
}