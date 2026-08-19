#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int i=0;
    int maxi=INT16_MIN;
      int j=0;
    while(i<5)
    {
        cin>>arr[i];
        i++;
    }
    for(int i=0;i<5;i++)
    {
       if(arr[i]>maxi)
       {
        maxi=arr[i];
        j=i;
       }

    }
    arr[j]=INT16_MIN;
    int maxi2=INT16_MIN;
     for(int i=0;i<5;i++)
    {   if(arr[i]!=maxi)
        {
        maxi2=max(arr[i],maxi2);
        }
    }
    cout<<"second largest is :"<<maxi2;
    return 0;
}