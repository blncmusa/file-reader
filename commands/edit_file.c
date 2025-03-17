#include <stdio.h>
#include "commands.h"

void edit_file(const char *file_name){
    FILE *fp;
    char buffer[256];

    fp = fopen(file_name, "a");
    if (fp == NULL){
        printf("Error: Could not open file %s\n", file_name);
        return;
    }  

    // ask user for input
    printf("Enter text to add to this file: ");
    getchar(); // clear the newline character from the buffer

    fgets(buffer, sizeof(buffer), stdin); // read the input, max 255 characters

    fprintf(fp, "%s", buffer); // write the input to the file

    fclose(fp); // close the file
    printf("Line successfully added to %s\n", file_name);
}