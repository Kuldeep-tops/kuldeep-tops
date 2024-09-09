#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    // Get User input radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area of the circle
    area = PI * radius * radius;

    // Calculate circumference of the circle
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.2f\n", area);

    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
