#include<iostream>
using namespace std;
void rotate(int arr[][3],int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<rows;i++)
    {
         swap(arr[i][2],arr[i][0]);
        
       
}
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int number;
    
    cout<<"Enter how many degree have to rotate:";
    cin>>number;
number=number/90;
cout<<"Rotated matrix iss:\n";
for(int i=0;i<number;i++)
{
    rotate(arr,3);
}
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}