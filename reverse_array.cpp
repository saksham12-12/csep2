#include<iostream>
using namespace std;
void reverse(int arr[][3],int rows){
   
    for(int i=0;i<rows;i++)
    {   int start=0;
        int end=2; 
        while(start<end)
        {
            swap(arr[i][start],arr[i][end]);
            end--;
            start++;
        }
    }
}
void print(int arr[][3],int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    reverse(arr,3);
    print(arr,3);
    return 0;
}