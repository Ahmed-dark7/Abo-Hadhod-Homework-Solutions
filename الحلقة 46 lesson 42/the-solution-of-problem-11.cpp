#include <iostream>
using namespace std;
int main()
{
    float degree1 , degree2 , degree3 , average;

    cout << "please enter your three degrees :\n";
    cin >> degree1 >> degree2 >> degree3;
    
    average = (degree1 + degree2 + degree3)/3;

    if (average  >= 50)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail";
    }

    return 0;
}