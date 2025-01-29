#include <iostream>
using namespace std;
int main()
{
    float degree;

    cout << "please enter your degree :\n";
    cin >> degree;
    
    if (degree >= 50)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail";
    }

    return 0;
}