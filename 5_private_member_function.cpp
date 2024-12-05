#include <iostream>
using namespace std;

class MyClass {
private:
    // Private member function
    void privateFunction() {
        cout << "This is a private member function!" << endl;
    }

public:
    // Public method that calls the private function
    void callPrivateFunction() {
        cout << "Calling private function from public method..." << endl;
        privateFunction();  // Calling the private function
    }
};

int main() {
    MyClass obj;
    
    // Calling the public method, which in turn calls the private function
    obj.callPrivateFunction();

    return 0;
}
