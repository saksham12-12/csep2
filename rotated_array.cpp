#include<iostream>
using namespace std;
 int main()
 {int arr[]={1,2,3,4,5};
 int k=0;
 int times;
 cout<<"Enter the numer of times to rotate:";
 cin>>times;
 if(times>5)
 {
    times=times%5;
 }
    while(k<times)
    {
    swap(arr[4],arr[0]);
        for(int i=1;i<4;i++)
        {
            swap(arr[i],arr[i-1]);
        }
        k++;
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "; 
    }
    return 0;
 
}