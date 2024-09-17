#include <stdio.h>

// Function to find the maximum number in an array
int findMax(int arr[], int size){
    int max = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    return max;
}

int main() {

    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the maximum element
    int max = findMax(arr, n);
    printf("The maximum number is: %d\n", max);

    return 0;
}
