//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st side: ";
    cin>>a;
    cout<<"Enter 2nd side: ";
    cin>>b;
    cout<<"Enter 3rd side: ";
    cin>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
       if((a==b)&&(b==c)&&(c==a))
           cout<<"Equilateral Triangle";
       else if((c!=a && c!=b && a==b)||(a!=b && a!=c && b==c)||(b!=a && b!=c && a==c)) cout<<"Isosceles Triangle";
       else cout<<"Scalene Triangle";
    else cout<<a<<","<<b<<","<<c<<" are not the sides of a triangle";
}