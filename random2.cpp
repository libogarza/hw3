#include <iostream>
#include <cmath>
#include "functions2.h"
#include <stdlib.h>
using namespace std;
void titlemenu();
void GetRational(int, int );
void reduce(int ,int );
void AddRational(int,int,int,int,int,int);
void SubtractRational(int,int,int,int,int,int);
void DisplayRational(int,int);
int main()
{
    char letter;
    int num1,den1,num2,den2;
    int anum=0;
    int aden=0;
    titlemenu();
    cout<<endl;
    cout<<"Enter a Option: ";
    cin>>letter;
    system("CLS");
    if(letter=='A'||letter=='a')
    {
        GetRational(num1,den1);
        GetRational(num2,den2);
        cout << "The result of " << num1 << "/" << den1 << " + " << num2 << "/" << den2 << endl;
        AddRational(anum, aden, num1, den1, num2, den2);
        cout<<anum<<"/"<<aden;
    }
    else if(letter=='S'||letter=='s')
    {
        GetRational(num1,den1);
        GetRational(num2,den2);
        cout << "The result of " << num1 << "/" << den1 << " - " << num2 << "/" << den2 << endl;
        SubtractRational(anum, aden, num1, den1, num2, den2);
        cout<<anum<<"/"<<aden;
    }
    else
    {
        cout<<"Thank you for using the rational calculator!!";
    }
    cout<<endl;
    system("pause");
    return 0;
}
void titlemenu()
{
    cout<<"Rational Calculator"<<endl;
    cout<<"(A)Addition"<<endl;
    cout<<"(S)Subtraction"<<endl;
    cout<<"(Q)Quit"<<endl;
}