//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main()
{
    int l,b,a,p;
    /*l=length
      b=breadth
      a=area
      p=perimeter
    */
   cout<<"Enter length of rectangle: ";
   cin>>l;
   cout<<"Enter breadth of rectangle: ";
   cin>>b;
   a = l * b;
   p = 2 * (l + b);
   if(a>p) cout<<"area is greater than perimeter";
   else cout<<"area is not greater than perimeter";


}