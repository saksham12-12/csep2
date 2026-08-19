#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int N;
   cin>>N;
   int leftSum=0;
   int rightSum=0;
   int arr[N];
   int arr1[100000];
   for(int i=0;i<N;i++)
   {
    cin>>arr[i];
   } 
   for(int i=0;i<N-1;i++)
   {for(int j=i+1;j<N;j++)
   {
    rightSum+=arr[j];
   }
  
cout<<rightSum;
    
   }  
    return 0;
}
