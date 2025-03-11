#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#include "developer.h"


typedef struct {
    developer developers [2];           //array of developers
    char logo [100];                    //logo of the group
} developer_group;

void init_developer_group(developer_group *group, const char *logo);

#endif //DEVELOPER_GROUP_H