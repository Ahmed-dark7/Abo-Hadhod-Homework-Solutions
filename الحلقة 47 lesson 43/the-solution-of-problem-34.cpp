#include <iostream>
using namespace std;
int main()
{
    float total_sales , percentage;

    cout << "please enter your total sales :\n";
    cin >> total_sales;

    if (total_sales >= 1000000) 
    {

        percentage = 0,01;
    }
    else if (total_sales >= 500000)
    {
        percentage = 0,02;
    }
    else if (total_sales >= 100000)
    {
        percentage = 0,03;
    }
    else if (total_sales >= 50000)
    {
        percentage = 0,05;
    }
    else
    {
        percentage = 0;
    }

    cout << "your total sales : " << total_sales;
    cout << "your percentage : " << total_sales * percentage;
    cout << "your tatal salary :" << total_sales + total_sales * percentage;

    return 0;
}