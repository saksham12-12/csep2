#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    for(int i=0;i<4;i++)
    {
        if(i%2==0)
        {int i=0;
            while(i<2)
            for(int i=0;i<4;i++)
            {
                cout<<arr[i][0]<<" ";
            }
        }
        else
        {
            for(int i=3;i<=0;i--)
            {
                cout<<arr[i];
            }
        }
    }
}