#include <stdio.h>

int main() {
    char name1[50], name2[50], name3[50], name4[50], name5[50];

    // Input 5 names from the user
    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);

    printf("Enter the third name: ");
    scanf("%s", name3);

    printf("Enter the fourth name: ");
    scanf("%s", name4);

    printf("Enter the fifth name: ");
    scanf("%s", name5);

    // Output the entered names
    printf("\nThe entered names are:\n");
    printf("Name 1: %s\n", name1);
    printf("Name 2: %s\n", name2);
    printf("Name 3: %s\n", name3);
    printf("Name 4: %s\n", name4);
    printf("Name 5: %s\n", name5);

    return 0;
}
