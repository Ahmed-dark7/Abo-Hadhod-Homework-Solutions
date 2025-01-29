#include <iostream>
using namespace std;

void read_password()
{
    short password;
    cout << "please enter your password :\n";
    cin >> password;;
}

void condition(short password)
{
    if (password == 9876)
    {
        cout << "your password is true";
    }
    else
    {
        cout << "wrong password";
    }
}

int main()
{
    short password;
    read_password();
    condition(password);
    return 0;
}