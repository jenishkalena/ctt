#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enetr student marks(out of 100):";
    cin>>marks;

    if(marks>=40)
    {
        cout<<"student has passed with marks:"<<"\n";
    }
    else
    {
        cout<<"student has failled with marks:"<<"\n";
    }
}