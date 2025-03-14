#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#include <stdio.h>
#include <string.h>

#include "developer.h"

#define MAX_DEVELOPERS 2  //Maximum number of developers in the group

// Definition of the developer_group struct
// Represents  group of developers, their count and their logo

typedef struct {
    //const int MAX_DEVELOPERS;
    developer developers [2];        //Array of developers
    int count;                                   // Current count of developers in the group
    char logo[512];                             // Logo of the developer group                          
} developer_group;


// Function to print the list of developers in the group
void print_developers(const developer_group *group);


// Function to create a new developer group with a specified logo
developer_group create_developer_group(const char *logo);


// Function to add a developer to the group
void add_developer(developer_group *group, developer *dev);


// Function to print the logo and names/alias of the developer group
void print_developer_group(const developer_group *group);

#endif //DEVELOPER_GROUP_H
