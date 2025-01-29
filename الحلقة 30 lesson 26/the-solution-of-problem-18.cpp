#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius , area , areaf , pie = 3.14;

    cout << "please enter the radius :\n";
    cin >> radius; 

    area = pie * pow(radius,2);
    areaf = ceil ( pie * pow(radius,2) );

    cout << "the area of your circle is : " << area;
    cout << "the final area of your circle is : " << areaf;

    return 0;
}