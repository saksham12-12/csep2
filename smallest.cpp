#include<iostream>
using namespace std;
int main(){
    int a;
    int rem=0;
    cout<<"Enter the digit:";
    cin>>a;
    int smallest= a%10;
    while(a!=0){
        rem= a%10;
    if (rem<=smallest)
    {
       smallest = rem;
    }
    a=a/10;
    }
    cout<< smallest;
    return 0;
}