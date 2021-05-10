#include<stdio.h>
#include<iostream>
#include<dos.h>

using namespace std;

class Bank{
    char acName[20];
    long int acNumber;
    int acBalance;
    public:
    int Banking();
    int Deposit();
    int WithDrow();
    int showBal();
};

int Bank::Banking()
{
    cout << "*************Wellcome to C++ Bank*****************\n";
    cout << "****** Choose Your Operations to  the Bank********\n";
    cout << "****** 1. Balance Enquiry" << endl;
    cout << "****** 2. Deposit Money" << endl;
    cout << "****** 3. Close Account" << endl;
}
