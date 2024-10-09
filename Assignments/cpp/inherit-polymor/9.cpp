#include <iostream>
using namespace std;

class Matrix{
private:
    int size;
    int *arr;

public:
    // Constructor to initialize the matrix
    Matrix(int s){
        size = s;
        arr = new int[size];
    }

    // Function to get data from the user
    void getData(){
        cout << "Enter " << size << " elements of the matrix: ";
        for (int i = 0; i < size; i++){
            cin >> arr[i];
        }
    }

    // Overload the + operator to add two 1D matrices
    Matrix operator+(Matrix& mat){
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.arr[i] = this->arr[i] + mat.arr[i];
        }
        return result;
    }

    // Function to display the matrix
    void display(){
        cout << "Matrix: ";
        for (int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free the dynamically allocated memory
    ~Matrix(){
        delete[] arr;
    }
};

int main(){
    int size;

    // Get the size of the matrices from the user
    cout << "Enter the size of the 1D matrices: ";
    cin >> size;

    // Create two matrices and get data from the user
    Matrix mat1(size), mat2(size);
    cout << "Enter elements for the first matrix:\n";
    mat1.getData();
    cout << "Enter elements for the second matrix:\n";
    mat2.getData();

    // Add the two matrices using the overloaded + operator
    Matrix result = mat1 + mat2;

    // Display the result
    cout << "\nFirst Matrix:\n";
    mat1.display();

    cout << "Second Matrix:\n";
    mat2.display();

    cout << "Resultant Matrix after Addition:\n";
    result.display();
}
