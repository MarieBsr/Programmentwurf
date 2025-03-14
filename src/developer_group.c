#include "developer_group.h"

// Function to create a new developer group with a specified logo
developer_group create_developer_group(const char *logo){
    developer_group group;      // Create a new developer group
    group.count = 0;
    strcpy(group.logo, logo);   // Copy the provided logo into the group struct
    return group;         
}


// Function to add a developer to the developer group
void add_developer(developer_group *group, developer *dev){
    if(group->count < MAX_DEVELOPERS){           // Check if the group has space for more developers                
        group->developers[group->count] = *dev;  // Add the developer to the group
        group->count++;                          // Increment the count of developers in the group
    }
}


// Function to print the logo and the names/alias of the developers in the developer group 
void print_developer_group(const developer_group * const group){    // Print the group's logo
    printf("%s\n", group->logo);
    for(int i = 0; i < group->count; i++){
        developer_print(group->developers[i]);                      // Print the names/alias of the developers in the group                              
    }
}


// Function to print only the developers in the group (without printing the logo)
void print_developers(const developer_group * const group){            
    for(int i = 0; i < group->count; i++){
        developer_print(group->developers[i]);  // Print the names/alias of the developers in the group
    }
}
