#include <iostream>
using namespace std;
int main()
{
    int max , sum = 0;
    cout << "please enter the maximum number you want :\n";
    cin >> max;
    for (int num = 1 ; num <= max ; num += 2)
    {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
