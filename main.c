#include <stdio.h> // importing standard input output library, the stuff we use to print to the console
#include "commands/commands.h"

// main function, the entry point of the program


int main() {
    char file_name[] = "text-files/test.txt"; // name of the file we are working with
    int choice; // store user choice

    do {
        printf("\n ===== File Editor =====\n");
        printf("1. View File\n");
        printf("2. Edit File\n");
        printf("3. Delete File\n");
        printf("4. Add File\n");
        printf("5. List Files\n");
        printf("6. Exit\n");

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
                add_file(file_name);
                break;
            case 5:
                list_files("text-files");
                break;
            case 6:
                printf("Goodbye! Exiting program...\n");
                break;
            default: 
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6); // repeat until user chooses to exit

    return 0;
}