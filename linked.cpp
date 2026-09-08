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
    int arr[4]={1,2,3,4};
    NODE *HEAD;
    HEAD=NULL;
    for(int i=0;i<4;i++)
    {
        if(HEAD==NULL)
        {
            HEAD=new NODE(arr[i]);
        }
        else{
            NODE *temp;
            temp= new NODE(arr[i]);
            temp->next=HEAD;
            HEAD=temp;

        }
    }
    NODE *temp;
    temp=HEAD;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;

}