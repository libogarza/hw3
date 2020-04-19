//****************************************************************************** 
// Team #  10        CSCI/CMPE 1370            Spring2020            Homework # 3 
// Liborio Garza
// Pablo J. Flores Jr. 
//******************************************************************************
#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include "HF.h"
using namespace std;
void titlemenu();
int gcd(int,int);
void add();
void subtract();
void GetRational(int &,int &);
void reduce(int,int);
void AddRational(int &,int &,int,int,int,int);
void SubtractRational(int &,int &,int,int,int,int);
void DisplayRational(int,int);
int main()
{
    char letter,ans;
    while(true)
    {
        titlemenu();
        cout<<endl;
        cout<<"Enter a Option: ";
        cin>>letter;
        cout<<endl;
        system("CLS");
        if(letter=='A'||letter=='a')
        {
            add();
        }
        else if(letter=='S'||letter=='s')
        {
            subtract();
        }
        else
        {
            break;
        }
    }
    cout<<"Thank you for using our Rational Calculator!!!";
    cout<<endl;
    system("pause");
    return 0;
}
