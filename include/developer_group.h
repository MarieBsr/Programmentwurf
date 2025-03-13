#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#include <stdio.h>
#include <string.h>


#include "developer.h"
#define MAX_DEVELOPERS 2

typedef struct {
    developer developers [MAX_DEVELOPERS];           //array of developers
    int count;
    char logo [512];                    //logo of the group
} developer_group;

void print_developers(const developer_group *group);

developer_group create_developer_group(const char *logo);
void add_developer(developer_group *group, developer *dev);
void print_developer_group(const developer_group *group);

#endif //DEVELOPER_GROUP_H
