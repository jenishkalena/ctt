#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an integer:";
    cin>>num;

    if(num%5==0)
    {
        cout<<"divisble by 5 num:"<<"\n";
    }
    else
    {
        cout<<"not divisible by 5 num:"<<"\n";
    }
}