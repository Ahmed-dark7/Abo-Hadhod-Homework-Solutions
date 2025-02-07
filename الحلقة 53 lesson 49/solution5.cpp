#include <iostream>
using namespace std;
int main()
{
    for (int i = 65; i <= 70; i++)
    {
        for (int t = 65; t <= i; t++)
        {
            cout << char(t);
        }
        cout << endl;
    }

    return 0;
}