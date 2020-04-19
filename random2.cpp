//************************************************************
// Team #10    CSCI/CMPE 1370    Spring 2020    Homework 3 
// Liborio Garza
// Pablo Flores
//************************************************************
#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include "functions.h"
using namespace std;
void titlemenu();
int gcd(int,int);
void add();
void subtract();
void GetRational(int *num,int *den);
void reduce(int *num,int *den);
void AddRational(int *num,int *den,int num1,int den1,int num2,int den2);
void SubtractRational(int *num,int *den, int num1,int den1,int num2,int den2);
void DisplayRational(int,int);
int main()
{
    char letter;
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
        cout<<"Thank you for using the rational calculator!!!!"<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}
