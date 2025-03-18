#include "commands.h"
#include <stdio.h>
#include <dirent.h>
#include <string.h>
void list_files(const char *path){
    DIR *folder = opendir(path);
    struct dirent *entry; 

    if (folder == NULL){
        printf("Error: could not open '%s' directory.\n", path);
        return;
    }

    printf("\nFiles in '%s':\n", path);
    printf("--------------------------------\n");

    while((entry = readdir(folder)) != NULL){
        if(strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0){
            printf("%s\n", entry->d_name);
        };
    }

    printf("--------------------------------\n");

    closedir(folder);
}