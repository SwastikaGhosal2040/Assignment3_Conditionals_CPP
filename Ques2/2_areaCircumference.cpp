#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float radius, pi, area, circumference;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    pi = 3.1415;
    area = pi * pow(radius,2);
    circumference = 2 * pi * radius;
    if(area>circumference) cout<<"area "<<area<<" sq.unit is larger than circumference "<<circumference<<" unit";
    else if(area<circumference) cout<<"area "<<area<<" sq.unit is not larger than circumference "<<circumference<<" unit";
    else cout<<"area "<<area<<" sq.unit is equal to circumference "<<circumference<<" unit";
}