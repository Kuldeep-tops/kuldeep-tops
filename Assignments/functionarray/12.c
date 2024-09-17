#include <stdio.h>

int main() {
    char names[5][50]; // Declare an array to store 5 names, each with a max length of 50 characters
    int i;

    // Input 5 students' names
    printf("Enter the names of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        gets(names[i]); // Use gets() to read a string (can also use fgets for safety)
    }

    // Display the names
    printf("\nThe names of the students are:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
