#include<iostream>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row_index;
        vector<int>col_index;
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<rows;j++)
            {
                if(matrix[i][j]==0)
                {
                    row_index.push_back(i);
                    col_index.push_back(j);
                }
            }
        }
        int s=0;
        while(s<row_index.size())
        {
            int k=0;
            while(k<cols)
            {
                matrix[row_index[s]][k]=0;
                k++;
            }
            s++;
        }
        int y=0;
        while(y<col_index.size())
        {
            int z=0;
            while(z<rows)
            {
                matrix[y][col_index[z]]=0;
                z++;
            }
            y++;
        }
        
    
    }
    int main()
    {
        
    }