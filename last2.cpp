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
    NODE *HEAD=NULL;
    NODE *Tail=NULL;
    for(int i=0;i<5;i++)
    {
        if(HEAD==NULL)
        {
            HEAD=new NODE(arr[i]);
            Tail=HEAD;
        }
        else{
           Tail->next=new NODE(arr[i]);
           Tail=Tail->next;
        }
    }
    NODE *Temp;
    Temp=HEAD;
    while(Temp!=NULL)
    {
        cout<<Temp->data<<" ";
        Temp=Temp->next;
    }
    return 0;
}