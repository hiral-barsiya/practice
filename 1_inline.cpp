// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

inline int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
    
}
int main() {
    int a, b ;
    cout << "a:";
    cin>> a;
    cout<<"b:";
    cin>> b;
    cout<< "addition is : " << add (a,b);
}