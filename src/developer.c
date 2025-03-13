#include "developer.h"

developer developer_create(char *name, char *alias) {
    developer dev;
    strcpy(dev.name, name);
    strcpy(dev.alias, alias);
    return dev;
}

void developer_print(developer dev) {
    printf("%s\n", dev.name);
    printf("%s\n", dev.alias);
}
