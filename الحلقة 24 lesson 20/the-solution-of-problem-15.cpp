#include <iostream>
using namespace std;
int main ()
{
    /* variables */
    float width , hight , area;

    /* the request of data */
    cout << "please enter the width and the hight of your triangle :\n";
    cin >> width >> hight;

    /* operations */
    area = ( width * hight );

    /* the result */
    cout << "the area of your triangle is :\n" << area;
    return 0;
}