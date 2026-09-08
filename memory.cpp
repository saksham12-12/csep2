#include<iostream>
using namespace std;
int main(){
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr<<endl<<ptr<<endl;
    float *ptr2= new float;
    *ptr2=15.001;
    cout<<*ptr2;
    cout<<endl;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int *p1=new int[n];
    //value
    for(int i=0;i<n;i++)
    {
        p1[i]=i+1;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<p1[i]<<" ";
    }
    delete ptr;
    delete ptr2;
    delete[] p1;


    return 0;

}