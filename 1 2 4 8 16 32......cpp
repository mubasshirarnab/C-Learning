#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i,n,m;
    cout << "Enter the number of terms: ";
    cin >> n;

    for(i = 0; i < n; i++){
        m = pow(2,i);
        cout << m << " ";
    }

    return 0;
}