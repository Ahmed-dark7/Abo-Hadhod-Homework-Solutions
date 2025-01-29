#include <iostream>
#include <string>
using namespace std;

string Name()
{
    string name;
    cout << "please enter your name :\n";
    getline (cin , name);
    return name;
}

int main()
{
    cout << Name();
    return 0;
}