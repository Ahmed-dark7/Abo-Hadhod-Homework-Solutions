#include <iostream>
#include <cmath>
using namespace std;
void area()
{
    float circumference , area , bie = 3.14;
    cout << "please enter the circumference :\n";
    cin >> circumference;
    area = ( pow(circumference, 2) ) / ( 4 * bie );    
    cout << "the area of your circle is :\n" << area;
}

int main()
{
    area();

    return 0;
}