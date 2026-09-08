#include<iostream>
using namespace std;

//defining class
class NODE{
    public:
    int data;
    NODE *next;
    NODE(int value)
    {
        data=value;
        next=NULL;
    }
};

//make function

NODE *CreateLinked(int arr[],int index,int size)
{
    //Base case
    if(index==size)
    {
        return NULL;
    }
    
    NODE *temp=new NODE(arr[index]);
    temp->next=CreateLinked(arr,index+1,size);
    return temp;
}

int main(){
    int arr[5]={1,2,3,4,5};
    NODE *HEAD;
    HEAD=CreateLinked(arr,0,5);
    NODE *temp;
    temp=HEAD;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}