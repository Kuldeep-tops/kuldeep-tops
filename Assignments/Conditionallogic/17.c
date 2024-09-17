#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;

    // Input the three angles of the triangle
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);

    // Calculate the sum of the angles
    sum = angle1 + angle2 + angle3;

    // Check if the sum of angles is 180, which is the condition for a valid triangle
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("A triangle can be formed with the given angles.\n");
    } else {
        printf("A triangle cannot be formed with the given angles.\n");
    }

    return 0;
}
