#include "commands.h"
#include <stdio.h>

void add_file(const char *file_name){
    FILE *fp;

    fp = fopen(file_name, "w");
    if(fp == NULL){
        printf("Error opening file.\n");
        return;
    }

    printf("File created successfully.\n");
    fclose(fp);
}