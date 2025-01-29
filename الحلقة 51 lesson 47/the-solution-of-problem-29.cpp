#include <iostream>
using namespace std;
int main()
{
    int max , sum = 0;
    cout << "please enter your maximum number :\n";
    cin >> max;
    for (int i = 0 ; i <= max ; i += 2)
    {
        sum += i;
    }
    cout << "the sumation of even numbers under (" << max <<") is " << sum;
}