#include<iostream>

using namespace std;

int main()
{
    int base, height;
    double area;

    cout<< "Enter the Base: ";
    cin>> base;
    cout<< "Enter the Height: ";
    cin>> height;

    area = (base * height) / 2;

    cout<< "The Area of the Triangle is: "<< area;

    return 0; 
}