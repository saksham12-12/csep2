#include<iostream>
using namespace std;
int main(){
    int a;
    int rem=0;
    cout<<"Enter the digit:";
    cin>>a;
    int largest= a%10;
    while(a!=0){
        rem= a%10;
    if (rem>=largest)
    {
        largest= rem;
    }
    a=a/10;
    }
    cout<< largest;
    return 0;
}