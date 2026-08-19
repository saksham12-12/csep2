#include<iostream>
using namespace std;
int main(){
    int size;
    int arr[size];
    int ans= arr[0];
    cout<<"Enter the size  of the array";
    cin>>size;
    cout<<"Enter the values of the array";
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<size;j++)
    {
        if(arr[j]<ans)
        {
            ans=arr[j];
        }
    }
    cout<<"The minimum element is :"<<ans;
    return 0;


}
