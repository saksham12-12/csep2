#include<stdio.h>
int main(){
    int arr[1000];
    int size;
    int pos=3;
    printf("Enter the size of array:");
    scanf("%d",&size);
    if(size<4)
    {
        printf("Enter number greater than 4.");
        return 0;
    }
    printf("Enter the elements of the aray:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=pos;j<size;j++)
    {
arr[j]=arr[j+1];
    }
    for(int i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}