#include <iostream>

using namespace std;
int max (int , int i=20 );

int max(int x, int y)
{
    if(x>y)
    {
  cout<<"x is max"<< x;
    }
    else{
   cout<< "y is max"<< y;
    }    
}
int main() {
    int a;
    cout << "a:";
    cin>> a;
    max (a);
}