#include<iostream>
using namespace std;
void input(int arr[][3],int rows)
{  
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }

}
void output(int arr[][3],int rows)
{   
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
int sum(int arr[][3],int rows){
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;

}
void rsum(int arr[][3],int rows){
    int rsumm=0;
for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            rsumm+=arr[i][j];

        }
        cout<<"SUM OF ROW"<<i<<rsumm;
        rsumm=0;
    }
}
void max_dia(int arr[][3],int rows)
{int dia1=0;
    int i=0;

    while(i<rows){
        dia1+=arr[i][i];
        i++;
    }
    int dia2=0;
    int k=0;
    int j=rows-1;
    while(k<rows)
    {
        dia2+=arr[k][j];
        k++;
        j--;
    }
    
    if(dia1>dia2){
        cout<<"dia1 is greatest";
    }
    else{
        cout<<"Dia2 is greatest";
    }


}
int search(int arr[][3],int rows,int target){
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {if(arr[i][j]==target)
            {
                cout<<"Got it";
            }

        }
    }
    cout<<"not present";
    return 0;
}
int main(){
    int rows;
    cout<<"Enter the number of rows:";
    cin>>rows;
    int arr[rows][3];
    input(arr,rows);
    output(arr,rows);
    return 0;
}