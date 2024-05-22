#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an integer:";
    cin>>num;

    if(num%5==0&& num%3==0){
        cout<<"divisible by both 5and3 num"<< "\n";
    }else{
        cout<<"not divisible by boyh 5and3 num:"<< "\n";
    }
}