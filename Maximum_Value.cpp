#include<iostream>

using namespace std;

int  main()
{
    int n, i;
    float f, max = 0.00;
    cout << "Enter the number of terms:";
    cin >> n;
    for(i=1; i <= n; i++){
        cin >> f;
        if(f>max){
            max=f;
        }
    }

    cout << "The Maximum number is: " << max;

    return 0;
}