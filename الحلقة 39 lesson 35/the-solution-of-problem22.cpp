#include <iostream>
#include <cmath>
using namespace std;
void area()
{
    float a , b , area , bie = 3.14;
    cout << "please enter a , b :\n";
    cin >> a >> b;
    area = ( bie * pow(b, 2) / 4 ) * ( ( 2 * a - b ) / ( 2 * a + b ) );
    cout << "the area of your circle is :\n" << area;
}

int main()
{
    area();
    return 0;
}