#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <string.h>
#include <stdio.h>

#define MAX_NAME_LENGTH 128
#define MAX_ALIAS_LENGTH 128

typedef struct {
    char name[MAX_NAME_LENGTH];
    char alias[MAX_NAME_LENGTH];
} developer;

developer developer_create(char *name, char *alias);

void developer_print(developer dev); 

#endif