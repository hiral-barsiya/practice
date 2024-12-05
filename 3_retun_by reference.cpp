#include <iostream>
using namespace std;

// Function that returns a reference to an integer
int& getReference(int& num) {
    return num;  // Returning the reference to the passed integer
}

int main() {
    int x = 10;
    
    // Displaying the value before modification
    cout << "Before: x = " << x << endl;
    
    // Get reference to x and modify it
    getReference(x) = 20;
    
    // Displaying the value after modification
    cout << "After: x = " << x << endl;

    return 0;
}
