#include <iostream>
using namespace std;
int main()
{
    int a; // sum of all odd number**
    cout << "enter the number :" << endl;
    cin >> a;
    int i = 1;
    int sum = 0;
    while (i <= a)
    {

        sum = sum + i;
        i = i + 2;
    }
    cout << "sum of odd no. is :" << sum << endl;
    return 0;
}
