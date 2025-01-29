#include <iostream>
using namespace std;
int main()
{
    short age;

    cout << "please enter your age :\n";
    cin >> age;
    
    if (age >= 18 && age <= 45)
    {
        cout << " acceptable";
    }
    else
    {
        cout << "unacceptable";
    }

    return 0;
}