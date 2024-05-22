#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an integer:";
    cin>>num;
    
    if(num>0){
        cout<<"positive num:";
    }else{
        cout<<"you enetred 0,which is neither positive nor negation:";
    }
}