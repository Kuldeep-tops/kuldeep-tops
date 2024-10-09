#include <iostream>
using namespace std;

// Template function to sort an array using bubble sort
template <typename T>
void sortArray(T arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to display an array
template <typename T>
void displayArray(T arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate an array based on user input
    int* intArray = new int[size];

    // Get array elements from the user
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++){
        cin >> intArray[i];
    }

    // Sort the array
    sortArray(intArray, size);

    // Display the sorted array
    cout << "Sorted array: ";
    displayArray(intArray, size);

    // Free the allocated memory
    delete[] intArray;
}
