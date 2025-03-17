#include <stdio.h>
#include "commands.h"

void view_file(const char *file_name){
    FILE *fp; 
    char character; 

    fp = fopen(file_name, "r");
    if (fp == NULL){
        printf("Error: Could not open file %s\n", file_name);
        return;
    }

    printf("Contents of %s:\n", file_name);
    printf("--------------------------------\n");

    while ((character = fgetc(fp)) != EOF){
        putchar(character);
    }

    printf("\n--------------------------------\n");

    fclose(fp);
}