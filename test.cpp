#include <iostream>
using namespace std;
int main()
{
    for ( int i = 1; i <= 10; i++)
    {
        cout << "i=" << i << endl;
        for ( int j = 0 ; j <= 10 ; j++ )
        {
            cout << i << " * " << j << " = " << i*j << endl;
        }
                cout<< "***************************" << endl;
    }
    
    return 0;
}