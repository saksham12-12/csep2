#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int sum=0;
    int prod=1;
    for(int i=0;i<6;i++)
    {
        if (i%2==0)
        {
            sum+=arr[i];
        }
        else
        {
            prod*=arr[i];
        }
    }
    cout<<"sum is:"<<sum<<"product is:"<<prod;
    return 0;
}