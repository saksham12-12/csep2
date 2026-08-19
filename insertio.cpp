#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[1000];
    for(int i=0;i<5;i++)
    {
        arr2[i+1]=arr[i];
    }
    arr2[0]=3;
    for(int i=0;i<6;i++)
    {
        cout<<arr2[i]<<" ";
    }
return 0;
}