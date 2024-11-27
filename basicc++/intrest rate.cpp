#include<iostream>
using namespace std;

int main(){
    int p,r,t,result;
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time period: ";
    cin>>t;
    result=(p*r*t)/100;
    cout<<"Simple Interest: "<<result;
}
