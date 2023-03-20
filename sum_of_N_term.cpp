#include<iostream>

using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "Enter the number of term: ";
    cin >> n;

    for ( i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum is: " << sum;

    return 0;
}