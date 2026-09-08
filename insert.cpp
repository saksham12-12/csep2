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

NODE *LinkedList(int arr[],int index, int size)
{
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
    int position=2;
    int value=5;
    NODE *HEAD;
    HEAD=LinkedList(arr,0,5);
    NODE *temp;
    temp=HEAD;
    while(position--)
    {
        temp=temp->next;
    }
    NODE *temp2=new NODE(value);
    temp2->next=temp->next;
    temp->next=temp2;
    NODE *tee;
    tee=HEAD;
    while(tee!=NULL)
    {
        cout<<tee->data<<" ";
        tee=tee->next;
    }
    

    return 0;

}