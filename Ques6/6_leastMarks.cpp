//If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Marks of A: ";
    cin>>a;
    cout<<"Marks of B: ";
    cin>>b;
    cout<<"Marks of C: ";
    cin>>c;
    if(a<b && a<c)      cout<<"A scored least marks";
    else if(b<a && b<c) cout<<"B scored least marks";
    else if(c<a && c<b) cout<<"C scored least marks";
    else if(c!=a && c!=b && a==b)
         if(c<a && c<b && a==b)  cout<<"C scored least marks"; 
         else cout<<"A & B both scored least marks";
    else if(b!=a && b!=c && a==c)
         if(b<a && b<c && a==c)  cout<<"B scored least marks"; 
         else cout<<"A & C both scored least marks";
    else if(a!=b && a!=c && b==c)
         if(a<b && a<c && b==c) cout<<"A scored least marks";
         else cout<<"B and C both scored least marks";
    else //if(a==b && b==c && c==a) 
         cout<<"A,B,C scored same, no least marks";
    
}