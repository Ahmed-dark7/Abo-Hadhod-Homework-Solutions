#include <iostream>
#include <cmath>
using namespace std;

float area()
{
    float R, pie = 3.14;
    cout << "please enter R :\n";
    cin >> R;
    return pie * pow(R,2);
}

int main()
{
    cout << "the area of your circle is : " << area();
    return 0;
}