#include <iostream>
using namespace std;

int     x = 300;
float   y = 509;

void test()
{
    int x=600;

    cout << x;
}


int main()
{
    int y = 404;
    int x = 100;
    ::x = 208;

    test();
    cout<< endl
        << x << endl
        << y << endl
        << ::y << endl
        << ::x;

    return 0;
}