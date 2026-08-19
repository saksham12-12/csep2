#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i=0;i<=5;i++)
    {
        cin>>arr[i];
    }
   
if(arr[0]<arr[1])
{
    for(int i=1;i<4;i++)
    {
        if(arr[i]<arr[i+1])
        {
            continue;
        }
        else{
            cout<<"not sorted";
            return 0;
        }
    }
}
if(arr[0]<arr[1])
{
    for(int i=1;i<4;i++)
    {
        if(arr[i]<arr[i+1])
        {
            continue;
        }
        else{
            cout<<"not sorted";
            return 0;
        }
    }
}
if(arr[0]>arr[1])
{
    for(int i=1;i<4;i++)
    {
        if(arr[i]>arr[i+1])
        {
            continue;
        }
        else{
            cout<<"not sorted";
            return 0;
        }
    }
}
cout<<"sorted";
    return 0;
}