#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float height , Diameter , area;

    cout << "please enter the height and the Diameter :\n";
    cin  >> height >> Diameter;

    area = height * sqrt (pow (Diameter,2) - pow (height,2)); 

    cout << "the area of your rectangle is : " << area;

    return 0;
}