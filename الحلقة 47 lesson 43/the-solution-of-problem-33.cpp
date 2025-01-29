#include <iostream>
using namespace std;
int main()
{
    float degree;

    cout << "please enter your degree :\n";
    cin >> degree;

    if (degree >= 90 && degree < 100) 
    {
        cout << "A";
    }
    else if (degree >= 80)
    {
        cout << "B";
    }
    else if (degree >= 70)
    {
        cout << "C";
    }
    else if (degree >= 60)
    {
        cout << "D";
    }
    else if (degree >= 50)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }

    return 0;
}