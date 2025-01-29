#include <iostream>
using namespace std;

void read_age()
{
    short age;
    cout << "please enter your age :\n";
    cin >> age;
}

void condition(short age)
{
    if (age >= 18 && age <= 45)
    {
        cout << " acceptable";
    }
    else
    {
        cout << "unacceptable";
    }
}

int main()
{
    short age;
    read_age();
    condition(age);
    return 0;
}