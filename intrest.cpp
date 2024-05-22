#include<iostream>
using namespace std;
int main()
{
    int principal,rate,time,intrest;
    cout<<"enter principal:";
    cin>>principal;
    cout<<"enter rate:";
    cin>>rate;
    cout<<"enter time:";
    cin>>time;
    intrest=(principal*rate*time)/100;
    cout<<"your intrest is :"<<intrest;
}