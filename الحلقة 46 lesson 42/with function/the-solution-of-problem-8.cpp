#include <iostream>
using namespace std;

void read_degree()
{
    float degree;
    cout << "please enter your degree :\n";
    cin >> degree;
}

void condition(float degree)
{
    if (degree >= 50)
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
    float degree;
    read_degree();
    condition(degree);
    return 0;
}