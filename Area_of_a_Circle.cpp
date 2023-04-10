#include<iostream>

using namespace std;

int main()
{
    int r;
    double pi = 3.1416;
    double area;

    cout<< "Enter the Radius of a Circle: ";
    cin>> r ;

    area = pi * r * r;

    cout<<"The area of the Circle is: " << area;

    return 0;

}
