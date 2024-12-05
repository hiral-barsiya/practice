#include <iostream>
using namespace std;

// Virtual Base Class
class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
    void display() {
        cout << "Displaying from A" << endl;
    }
};

// Class B inherits from A
class B : virtual public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
};

// Class C inherits from A
class C : virtual public A {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
};

// Class D inherits from both B and C
class D : public B, public C {
public:
    D() {
        cout << "Constructor of D" << endl;
    }
};

int main() {
    D obj;  // Create an object of class D
    obj.display();  // Call a function from class A

    return 0;
}
