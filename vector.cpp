#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
      vector<vector<int>> matrix(3, vector<int>(3));
      vector<int>arr;
        int k=0;
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            matrix[i][j]=arr[k];
            k++;

        }
      }
      sort(arr.begin(),arr.end());

}