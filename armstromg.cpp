#include<iostream>
using namespace std;
int main(){
    int a;
    int rem=0;
    int number=0;

    cout<<"Enter the digit:";
    cin>>a;
    int b=a;
    while (a!=0)
    {
        rem=a%10;
        number+=(rem*rem*rem);

        a=a/10;
    }

    
    if (number==b)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"not a armstrong";
    }
    return 0;
}