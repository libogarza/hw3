#pragma once
#include <vector>
#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;
void GetRational(int num, int den)
{
    string fraction;
    cout<<"Please enter a fraction (n/d): "; 
    getline(cin, fraction);
    if(den==0)
    {
        cout<<"Sorry, a fraction divide by zero is not possible.";
        cout<<"Try again.";
    }
}
void reduce(int num,int den)
{
    int A=*num;
    int B=*den;
    int R=(A%B);
    while(R!=0)
    {
        A=B;
        B=R;
        R=(A%B);
    }
    num=num/B;
    den=den/B;
}
void AddRational(int anum, int aden, int num1, int den1,int num2, int den2) 
{
    anum = (num1*den2) + (num2*den1);
    aden = (den1*den2);
    reduce(anum, aden);
}
void SubtractRational(int snum,int sden,int num1,int den1,int num2,int den2)
{
    snum = (num1*den2) - (num2*den1);
    sden = (den1*den2);
    reduce (snum, sden);
}
void DisplayRational(int num, int den) 
{
    if (den == 1) 
    {
        cout << num;
    }
}
