//SUM OF ALL INDIVIDUAL DIGITS OF A NUMBER
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, r;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout << "Sum of digits of a number = " << sum;
    return 0;
}