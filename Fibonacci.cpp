//0,1,1,2,3,5,8,13,21,34,55,89,..........

#include<iostream>

using namespace std;

int main()
{
    int i=1,n=0,n1=1;
    int sum,term;
    cout<< "Enter the number of term: ";
    cin >> term;

    cout<< n <<","<< n1  <<",";

    sum= n + n1;

    for(i=3; i<=term; i++){
        cout << sum << ",";
        n = n1;
        n1 = sum;
        sum = n + n1;
    }

    return 0;
}
