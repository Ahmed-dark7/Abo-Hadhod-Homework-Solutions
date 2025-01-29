#include <iostream>
#include <cmath>
using namespace std;

float area()
{
    float bie = 3.14 , diameter;
    cout << "please enter the length of diameter : \n";
    cin >> diameter;
    return  (bie * pow(diameter, 2)) / 4;
}

int main()
{
    cout << "the area of your circle is : " << area();
    return 0;
}