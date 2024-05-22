#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the value of n:";
    cin>>n;

    cout<<"fibonaca sequene up to n:";
    int prev=1,curr=1;
    cout<<"prev:";
    cout<<"curr:";

    for(int i=3;i<=n;i++){
        int next=prev+curr;
        cout<<"next:";
        prev=curr;
        curr=next;
    }
}