#include <iostream>

using namespace std;

class maximum  {  public: 
 
//parameterized constructor with default argument 
maximum (int a, int b = 10) 
{ 
 cout << "Value of a: "<<a<<" Value of b: "<<b<<endl; 
if ( a > b ) 
cout <<  "a is max" ;  
else 
cout  << "b is max" ;  
} 
}; 


int main() {
  maximum m(78);
  
}