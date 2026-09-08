#include<iostream>
using namespace std;
class NODE{
    public:
    int data;
    NODE *next;
    NODE(int value){
        data=value;
        next=NULL;
    }
};


int main(){
    int arr[5]={1,2,3,4,5};
    NODE *HEAD;
    HEAD=NULL;
    for(int i=0;i<5;i++)
    {
        if(HEAD==NULL)
        {
            HEAD=new NODE(arr[i]);
        }
        else
        {
            NODE *temp;
            temp=new NODE(arr[i]);
            temp->next=HEAD;
            HEAD=temp;
        }
    }
   
    NODE *tail;
    if(HEAD==NULL)
    {
        HEAD=new NODE(10);
    }
    else{
        NODE *tail;
        tail=HEAD;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        NODE *temp;
        temp=new NODE(10);
        tail->next=temp;      
    }
    NODE *X;
    X=HEAD;
    while(X!=NULL)
    {
        cout<<X->data<<" ";
        X=X->next;
    }
    return 0;
    
}