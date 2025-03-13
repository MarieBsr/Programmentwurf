#include "developer.h"

//copy names and alias in structure
developer developer_create(char *name, char *alias) {
    developer dev;
    strcpy(dev.name, name);
    strcpy(dev.alias, alias);
    return dev;
}

//print names and alias 
void developer_print(developer dev) {
    printf("%s\n", dev.name);
    printf("%s\n", dev.alias);
}
