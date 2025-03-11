#include <stdio.h>
#include <string.h>
#include "developer_group.h"

developer_group create_developer_group(const char *logo){
    developer_group group;
    group.count = 0;
    strcpy(group.logo, logo);
    return group;
}

void add_developer(developer_group *group, developer *dev){
    if(group->count < MAX_DEVELOPERS){
        group->developers[group->count] = *dev;
        group->count++;
    }
}

void print_developer_group(const developer_group *group){
    printf("%s\n", group->logo);
    for(int i = 0; i < group->count; i++){
        print_developer(&group->developers[i]);
    }
}