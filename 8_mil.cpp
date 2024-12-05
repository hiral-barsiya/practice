// Online C++ compiler to run C++ program online
#include<iostream>  

using namespace std;
class test  { 
    
private:  
int m_value1;  
double m_value2; 
char m_value3;

public: 
//directly initialize our member variables 
// using parameterized 

test(int value1, double value2, char value3='c') :m_value1(value1),m_value2(value2), 
m_value3(value3) 
{ 
// No need for assignment here 
} 
void print() 
{ 
cout << "Value 1 is: " << m_value1 << endl ; 
cout << "Value 2 is: " << m_value2 << endl ; 
cout << "Value 3 is: " << m_value3 << endl ; 
} 
}; 
int main() 
{ 
test t1(1, 2.2); 
//value1 = 1, value2=2.2, value3 gets default value 'c' 
t1.print(); 
return 0; 
} 