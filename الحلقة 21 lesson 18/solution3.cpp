#include <iostream>
using namespace std;
int main ()
{
    short duration , age;

    cout << "please enter your current age :";
    cin  >> age;
    cout <<endl;
    cout << "please enter duration :";
    cin  >> duration;
    cout <<endl;

    cout << "After " << duration << " years you will be " << age + duration << " years old.";
    return 0;
}
