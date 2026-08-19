#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,-3,7,-12,12,11};
    int prefix=0;
    int maxi=INT16_MIN;
    for(int i=0;i<7;i++)
    {
        prefix+=arr[i];
        if(prefix<=0)
        {
            prefix=0;
        }
        maxi=max(maxi,prefix);
    }
    cout<< maxi;
    return 0;
    
}