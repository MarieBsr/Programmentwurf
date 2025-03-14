#include <stdio.h>
#include <stdlib.h>
#include "developer_group.h"
#include "developer.h"

int main(void){

    //Create a developer group with an ASCII art logo
    developer_group group_F = create_developer_group( 
        "         o  o   o  o\n"
        "         |\\/ \\^/ \\/|\n"
        "         |,-------.|\n"
        "       ,-. (|)   (|) ,-. \n"
        "       \\_*._ ' '_.*_/\n"
        "        /`-.`--' .-'\\\\\n"
        "   ,--./    `---'    \\,--.\n"
        "   \\   |(  )     (  )|   /\n"
        "    \\  | ||       || |  /\n"
        "     \\ | /|\\     /|\\ | /\n"
        "     /  \\-._     _,-/  \\\n"
        "    //| \\\\  `---'  // |\\\\\n"
        "   /,-.,-.\\       /,-.,-.\\\n"
        "  o   o   o      o   o    o\n"
);

//Create two developers with name and alias
developer developer1 = developer_create("Marie Basler", "alias MarieBsr");
developer developer2 = developer_create("Katharina Benedikt", "alias Katharina1310");

//Add developers to the group
add_developer(&group_F, &developer1);
add_developer(&group_F, &developer2);

int choice;
char input[10];

//Menu loop
do {
    printf("========================\n");
    printf("Choose your action:\n");
    printf("List Developers [1]\n");
    printf("Print Group Logo [2]\n");
    printf("Print Group [3]\n");
    printf("Exit [4]\n");
    printf("========================\n");
    printf("Enter choice: ");

    //Get user input
    if (fgets(input, sizeof(input), stdin) != NULL) {
        choice = atoi(input);   //Convert input to integer
    } else {
        choice = 0;     //Default to invalid choice
    }

    //Execute chosen action
    switch (choice) {
        case 1:
            //Print list of developers
            print_developers(&group_F); 
            break;
        case 2:
            //Print group logo
            printf("%s\n", group_F.logo);
            break;
        case 3:
            //Print group logo & list of developer
            print_developer_group(&group_F);
            break;
        case 4:
            //Exit the program
            printf("Exiting...\n");
            break;
        default:
            //Handle invalid input
            printf("Invalid choice\n");
            break;
    }
} while (choice != 4);  //Continues until the user chooses to exit
return 0;
}

