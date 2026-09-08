#include<iostream>
using namespace std;
class NODE{
    public:
    int data;
    NODE *next;
    NODE (int value)
    {
        data=value;
        next=NULL;
    }

};
NODE *Linked_list(int arr[],int index,int size)
{
    if(index==size)
    {
        return NULL;
    }
    NODE *temp=new NODE(arr[index]);
    temp->next=Linked_list(arr,index+1,size);
    return temp;
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    NODE *HEAD=Linked_list(arr,0,5);
    NODE *END;
    NODE *temp=HEAD;
    while (temp->next!=NULL)
{
   END=temp;
    temp=temp->next;

}
delete temp;
END->next=NULL;
NODE *trav=HEAD;
while(trav!=NULL)
{
    cout<<trav->data<<" ";
    trav=trav->next;
}
    
    return 0;
}