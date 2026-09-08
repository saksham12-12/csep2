#include<iostream>
using namespace std;
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
NODE *LinkedList(int arr[],int index,int size){
    if(index==size)
    {
        return NULL;
    }
    NODE *temp;
    temp=new NODE(arr[index]);
    temp->next=LinkedList(arr,index+1,size);
    return temp;
}
int main(){
    int arr[5]={1,2,3,4,5};
    NODE *HEAD;
    HEAD=LinkedList(arr,0,5);
    NODE *temp;
  
    temp=HEAD;
    HEAD=temp->next;
    delete temp;

    NODE *end;
    end=HEAD;

    NODE *neq;
    neq=HEAD;
    while(neq!=NULL)
    {
        cout<<neq->data<<" ";
        neq=neq->next;
    }


    return 0;
}
