#include <iostream>
using namespace std;
int main()
{
    short password;

    cout << "please enter your password :\n";
    cin >> password;;
    
    if (password == 9876)
    {
        cout << "your password is true";
    }
    else
    {
        cout << "wrong password";
    }

    return 0;
}