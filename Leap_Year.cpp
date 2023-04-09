#include<iostream>

using namespace std;

int main()
{
    int y;
    cout<< "Please enter any Year: ";
    cin >> y;

    if(y%400==0){
       cout<< "The Year is Leap Year\n";
    }
    else if(y%100==0){
        cout<< "The Year is not Leap Year\n";
    }
    else if(y%4==0){
        cout<< "The Year is Leap Year\n";
    }
    else{
        cout<< "The Year is not Leap Year\n";
    }

    return 0;

}
