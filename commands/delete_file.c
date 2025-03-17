#include "commands.h"
#include <stdio.h>

void delete_file(const char *file_name){
    int status;
    char confirm;


    // add confirrmation
    printf("Are you sure you want to delete the file? (y/n): ");
    scanf(" %c", &confirm);

    if(confirm == 'y'){
        status = remove(file_name);
    } else {
        printf("File not deleted.\n");
        return;
    }

    if(status == 0){
        printf("File deleted successfully.\n");
    } else {
        printf("Error deleting file.\n");
    }
}