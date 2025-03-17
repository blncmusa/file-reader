#include <stdio.h> // importing standard input output library, the stuff we use to print to the console
#include "commands/commands.h"

// main function, the entry point of the program


int main() {
    char file_name[] = "test.txt"; // name of the file we are working with
    int choice; // store user choice

    do {
        printf("\n ===== File Editor =====\n");
        printf("1. View File\n");
        printf("2. Edit File\n");
        printf("3. Delete File\n");
        printf("4. Exit\n");

        // get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: 
                view_file(file_name);
                break;
            case 2: 
                edit_file(file_name);
                break;
            case 3:
                delete_file(file_name);
                break;
            case 4:
                printf("Goodbye! Exiting program...\n");
                break;
            default: 
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4); // repeat until user chooses to exit

    return 0;
}