#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the digit";
    cin>>a;
    int count=0;

while(a!=0)
{
    count++;
    a=a/10;
}
cout<<count;
return 0;

}