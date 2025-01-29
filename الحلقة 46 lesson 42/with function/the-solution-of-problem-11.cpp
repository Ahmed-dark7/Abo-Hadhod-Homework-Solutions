#include <iostream>
using namespace std;

void read_degrees()
{
    float degree1 , degree2 , degree3;
    cout << "please enter your three degrees :\n";
    cin >> degree1 >> degree2 >> degree3;
}

float Average(float degree1 , float degree2 , float degree3 )
{
    float average;
    return average = (degree1 + degree2 + degree3)/3;
}

void condition()
{
    float degree1 , degree2 , degree3;
    if (Average(degree1, degree2, degree3) >= 50)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail";
    }
}

int main()
{
    read_degrees();
    condition();
    return 0;
}