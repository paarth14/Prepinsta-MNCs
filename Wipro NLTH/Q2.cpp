//Question 2 - Matrix

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns, sum[100], mat[100][100], maxNo=0;
    
    cout<<"Enter no. of rows: "<<endl;
    cin>>rows;
    
    cout<<"Enter no. of columns: "<<endl;
    cin>>columns;
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin>>mat[i][j];
        }
    }
    
    for(int i=0; i<rows; i++)
    {
        sum[i] = 0;
        for(int j=0; j<columns; j++)
        {
            sum[i] += mat[i][j];
        }
        cout<<endl;
    }
    
    for(int i=0; i<rows; i++)
    {
        cout<<"Row "<<i+1<<": "<<sum[i]<<endl;
    }
    
    for(int i=0; i<rows; i++)
    {
        maxNo = max(sum[i], maxNo);
    }
    
    cout<<endl;
    
    cout<<"Row having the maximum sum: "<<maxNo<<endl;
    
    return 0;
}
