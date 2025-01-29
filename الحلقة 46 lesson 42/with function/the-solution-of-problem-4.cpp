#include <iostream>
using namespace std;
void read_supplies()
{
    short age;
    bool driving_license;
    cout << "please enter your age :\n";
    cin >> age;
    cout << "Do you have driving license ? ( write 1 if you have or 2 if you don't )\n";
    cin >> driving_license;
}

void condition(short age , bool driving_license)
{
    if (age >= 20 && driving_license == 1 )
    {
        cout << "you have been appointed";
    }
    else
    {
        cout << "unfortunately, you were not appointed";
    }
}

int main()
{
    short age;
    bool driving_license;
    read_supplies();
    condition(age,driving_license);
    return 0;
}