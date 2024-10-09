#include <iostream>
using namespace std;

// Base class
class Base{
private:
    int privateVar;  // Private member, accessible only within the Base class

protected:
    int protectedVar;  // Protected member, accessible in derived classes

public:
    int publicVar;  // Public member, accessible everywhere

    // Function to set data for private and protected members (as they can't be accessed directly)
    void setBaseData(int pv, int protv, int pubv){
        privateVar = pv;
        protectedVar = protv;
        publicVar = pubv;
    }

    // Function to display private member (since it's not accessible outside the class)
    void displayPrivateVar(){
        cout << "Private Variable (accessible only in base class): " << privateVar << endl;
    }
};

// Derived class from Base
class Derived : public Base{
public:
    // Function to display data
    void displayDerivedData(){
        // Private member cannot be accessed here, not even with inheritance
        // protectedVar is accessible because it's protected in the base class
        // publicVar is accessible because it's public in the base class
        cout << "Protected Variable (accessible in derived class): " << protectedVar << endl;
        cout << "Public Variable (accessible in derived class and outside): " << publicVar << endl;
    }
};

int main(){
    Derived obj;
    
    // Set data for base class members
    int privateInput, protectedInput, publicInput;
    cout << "Enter value for Private Variable: ";
    cin >> privateInput;
    cout << "Enter value for Protected Variable: ";
    cin >> protectedInput;
    cout << "Enter value for Public Variable: ";
    cin >> publicInput;

    // Setting base class data (private, protected, public)
    obj.setBaseData(privateInput, protectedInput, publicInput);
    
    // Display private variable through base class function
    obj.displayPrivateVar();
    
    // Display protected and public variables through derived class function
    obj.displayDerivedData();
}
