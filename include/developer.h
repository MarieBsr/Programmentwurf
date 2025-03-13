#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <string.h>
#include <stdio.h>

//define maximum length for names and alias
#define MAX_NAME_LENGTH 128
#define MAX_ALIAS_LENGTH 128

//define type for name and alias
typedef struct {
    char name[MAX_NAME_LENGTH];
    char alias[MAX_NAME_LENGTH];
} developer;

//introduce function to list developers
developer developer_create(char *name, char *alias);

//introduce function to print developers
void developer_print(developer dev); 

#endif
