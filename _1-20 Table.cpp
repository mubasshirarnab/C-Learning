#include<iostream>

using namespace std;

int main()
{
    int n,i;

    for(n=1; n<=20; n=n+1){
        for(i=1; i<=10; i=i+1){
            cout<<n<< "X" <<i <<"=" <<n*i<<"\n";
        }
    }

    return 0;
}