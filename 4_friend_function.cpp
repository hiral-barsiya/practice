#include <iostream>

using namespace std;

class A
{

    int age = 12;

    friend bool isEligibleForDrivingLicence();
};

bool isEligibleForDrivingLicence()
{
    A a;
    return a.age > 18 ? true : false;
}

int main()
{
    cout << isEligibleForDrivingLicence();

    return 0;
}