#include<iostream>
using namespace std;
int main(){
    int a;
    int rem=0;
    int number=0;
    cout<<"Enter the digit:";
    cin>>a;
    while (a!=0)
    {
        rem=a%10;
        number=(number*10)+rem;

        a=a/10;
    }
    cout<<number;
    return 0;
}