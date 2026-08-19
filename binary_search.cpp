#include<iostream>
using namespace std;
int search(int arr[1000],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start<end)
    {
        mid=(start+end)/2;
        if(arr[mid]==target)
        {cout<<"Index is:"<<mid;
            return 0;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else
        {start=mid+1;}
    }
    cout<<"Not avialable";
    return 0;
}
int main(){
    int arr[1000];
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter the array elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the number whose index you want to search:";
    cin>>target;
    search(arr,size,target);

    
 return 0;   
}