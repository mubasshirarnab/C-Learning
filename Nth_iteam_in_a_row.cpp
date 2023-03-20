#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number to print: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        if (i%10==0)
        {
            cout << "\n";
        } 
    }

    return 0;  
}