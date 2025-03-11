#include <stdio.h>
#include "developer_group.h"
int main(){
    developer_group group_F = create_developer_group( 
"         o  o   o  o\n"
"         |\/ \^/ \/|\n"
"         |,-------.|\n"
"       ,-.(|)   (|),-.\n"
"       \_*._ ' '_.* _/\n"
"        /`-.`--' .-'\\\n"
"   ,--./    `---'    \,--.\n"
"   \   |(  )     (  )|   /\n"
"    \  | ||       || |  /\n"
"     \ | /|\     /|\ | /\n"
"     /  \-._     _,-/  \\\n"
"    //| \\  `---'  // |\\\\\n"
"   /,-.,-.\       /,-.,-.\\\n"
"  o   o   o      o   o    o\n"
);

add_developer(&group_F, &(developer){"Marie Basler", 25, 1000});
int choice;
do {
    printf("========================\n");
    printf("Choose your action:\n");
    printf("List Developers [1]\n");
    printf("Print Group Logo [2]\n");
    printf("Print Group [3]\n");
    printf("Exit [4]\n");
    printf("========================\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            //list developers
            break;
        case 2:
            printf("%s\n", group_F.logo);
            break;
        case 3:
            print_developer_group(&group_F);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
} while (choice != 4);
return 0;
}
