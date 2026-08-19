#include<iostream>
using namespace std;
int main(){
    int a;
    int num=0;
    cout<<"Enter the digit:";
    cin>>a;
    int count=0;

while(a!=0)
{
    num=a%10;
    count+=num;
    a=a/10;
}
cout<<count;
return 0;

}