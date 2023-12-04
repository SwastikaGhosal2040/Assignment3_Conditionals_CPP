//Given three points (x1, y1), (x2, y2) and 
//(x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter coordinates of point1 : ";
    cin>>x1>>y1;
    cout<<"Enter coordinates of point2 : ";
    cin>>x2>>y2;
    cout<<"Enter coordinates of point3 : ";
    cin>>x3>>y3;
    //check if 3 points are collinear
    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)) cout<<"Collinear";
    else cout<<"Not collinear";
    

}