#include <stdio.h> // importing standard input output library, the stuff we use to print to the console
#include "commands/commands.h"

// main function, the entry point of the program


int main() {
    char current_file[200] = ""; // name of the file we are working with
    int choice; // store user choice

    printf("Available files:\n");
    list_files("text-files");

    // get user input for file name
    char file_name[150];
    printf("Select a file: ");
    scanf("%s", file_name);
    sprintf(current_file, "text-files/%s", file_name);


    do {
        printf("\n ===== File Editor =====\n");
        printf("1. View File\n");
        printf("2. Edit File\n");
        printf("3. Delete File\n");
        printf("4. Add File\n");
        printf("5. List Files\n");
        printf("6. Change File\n");
        printf("7. Exit\n");

        // get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: 
                view_file(current_file);
                break;
            case 2: 
                edit_file(current_file);
                break;
            case 3:
                delete_file(current_file);
                break;
            case 4: {
                char new_file[150];
                printf("Enter a new file name: ");
                scanf("%s", new_file);

                char full_path[200];
                sprintf(full_path, "text-files/%s.txt", new_file);
                add_file(full_path);
                break;
            }
            case 5:
                list_files("text-files");
                break;
            case 6:
                printf("Enter a new file name: ");
                scanf("%s", file_name);
                sprintf(current_file, "text-files/%s", file_name);
                break;
            case 7:
                printf("Goodbye! Exiting program...\n");
                break;
            default: 
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7); // repeat until user chooses to exit

    return 0;
}