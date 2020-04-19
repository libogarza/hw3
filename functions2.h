#pragma once
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <vector>
using namespace std;
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
void titlemenu()
{
    cout<<"Rational Calculator"<<endl;
    cout<<"(A)Addition"<<endl;
    cout<<"(S)Subtraction"<<endl;
    cout<<"(Q)Quit"<<endl;
}
void GetRational(int &num, int &den)
{
    char c;
    cout<<"Please enter a fraction: ";
    cin>>num>>c>>den;
    if(den==0)
    {
        cout<<"Sorry, a fraction divide by zero is not possible.";
    }   
}
void reduce(int &num,int &den)
{
    int gcf=gcd(num,den);
    num /=gcf;
    den /=gcf;
}
void AddRational(int &anum,int &aden,int num1,int den1,int num2,int den2)
{
    anum=(num1*den2)+(num2*den1);
    aden=(den1*den2);
    reduce(anum,aden);
}
void SubtractRational(int &anum,int &aden,int num1,int den1,int num2,int den2)
{
    anum=(num1*den2)-(num2*den1);
    aden=(den1*den2);
    reduce(anum,aden);
}
void DisplayRational(int anum,int aden) 
{
   cout<<"The result is: "<<anum<<endl;
   if(aden!=1)
   {
       cout<<"/"<<aden<<endl;
   }
}
void add()
{
    int num1,den1,num2,den2,anum,aden;
    char ans;
    do 
    {
        GetRational(num1,den1);
        GetRational(num2,den2);
        AddRational(anum,aden,num1,den1,num2,den2);
        DisplayRational(anum,aden);
        cout<<"Do you want to add again(y/n): ";
        cin>>ans;
        system("CLS");
    }
    while(ans=='Y'|| ans=='y');
}
void subtract()
{
    int num1,den1,num2,den2,anum,aden;
    char ans;
    do 
    {
        GetRational(num1,den1);
        GetRational(num2,den2);
        SubtractRational(anum,aden,num1,den1,num2,den2);
        DisplayRational(anum,aden);
        cout<<"Do you want to subtract again(y/n): ";
        cin>>ans;
        system("CLS");
    }
    while(ans=='Y'|| ans=='y');
}
