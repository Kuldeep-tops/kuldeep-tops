#include <stdio.h>

int main() {
    float height;

    // Accept the height from the user
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    // Categorize the person based on their height
    if (height < 150.0) {
        printf("You are categorized as short.\n");
    } else if (height >= 150.0 && height <= 180.0) {
        printf("You are categorized as average height.\n");
    } else {
        printf("You are categorized as tall.\n");
    }

    return 0;
}
