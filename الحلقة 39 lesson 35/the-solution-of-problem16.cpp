#include <iostream>
#include <cmath>
using namespace std;

float area()
{
    float num1, num2;
    cout << "please enter Number 1:\n";
    cin >> num1;
    cout << "please enter Number 2:\n";
    cin >> num2;
    return num1 * sqrt(pow(num2, 2) - pow(num1, 2));
}

int main()
{
    cout << "the area of rectangle is : " << area();
    return 0;
}