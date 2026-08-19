#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int target=12;
    int find=0;
    for(int i=0;i<6;i++)
    {
        find=target-arr[i];
        int start=i+1;
        int end=5;
        while(start<end)
        {
            if(arr[start]+arr[end]==find)
            {
            cout<<"indexes are"<<i<<start<<end;
            
            return 7;
            }
            else if(arr[start]+arr[end]<find)
            {
                start++;
            }
            else
            {
                end--;
            }



        }
    }
cout<<"not avialable";
return 0;
}