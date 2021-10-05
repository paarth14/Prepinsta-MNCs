//Question 3: Taxi & Passangers

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    
    int col;
    cout<<"Enter number of columns : ";
    cin>>col;
    
    int mat[100][100];
    cout<<"Enter elements for the matrix : "<<endl;
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin>>mat[i][j];    
        }
    }
    
    int count=0;
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(mat[i][j] == 1)
            {
                count++;
            }
        }
    }
    
    cout<<"Total number of passesnger : "<<count;
    return 0;
}
