#include <stdio.h>

// Function to sort an array in ascending order
void sortAscending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort an array in descending order
void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to input elements into an array
void inputArray(int arr[], int size) {
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[100], arr2[100], n1, n2, choice;

    // Input the size and elements of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    inputArray(arr1, n1);

    // Input the size and elements of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    inputArray(arr2, n2);

    // Ask the user whether to sort in ascending or descending order
    printf("Enter 1 to sort in ascending order, 2 for descending order: ");
    scanf("%d", &choice);

    // Sort both arrays based on the user's choice
    if (choice == 1) {
        sortAscending(arr1, n1);
        sortAscending(arr2, n2);
        printf("Arrays sorted in ascending order:\n");
    } else if (choice == 2) {
        sortDescending(arr1, n1);
        sortDescending(arr2, n2);
        printf("Arrays sorted in descending order:\n");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Print the sorted arrays
    printf("First array: ");
    printArray(arr1, n1);

    printf("Second array: ");
    printArray(arr2, n2);

    return 0;
}
