#include <iostream>
using namespace std;

void read_number()
{
    int num;
    cout << "please enter number :\n";
    cin >> num;
}

void number(int num)
{
    for (int num ; num >= 1 ; num--)
    {
        cout << num << endl;
    }
}

int main()
{
    int num;
    read_number();
    number(num);
    return 0;
}