#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,-2,5,8,20,-10,8};
    int sum=0;
    for(int i=0;i<8;i++)
    {
        sum+=arr[i];
    }
    int check=sum/2;
    int ans=0;
    for(int i=0;i<7;i++)
    {
        ans+=arr[i];
        if(ans==check)
        {
            cout<<"can be possible";
            return 0;

        }

    }
    cout<<"can't be possible";
    return 0;
}