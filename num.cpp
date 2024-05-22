#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enetr the value of n:";
    cin>>n;

    cout<<"sequence up to n:";
    int num=1;
    while(num<=n)
    {
        cout<<"num:";
        num*=2;
    }
}