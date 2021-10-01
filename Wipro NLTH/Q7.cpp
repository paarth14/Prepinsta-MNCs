//Question 7 - Max Element from 2 arrays.

#include<bits/stdc++.h>
using namespace std;

int* sortArray(int len, int* arr)
{
    int temp = 0, j=0;
    for(int i=0; i<len; i++) //2 5 1 3 9 8 4 6 5 2 3 11 --> 11 13 2 4 15 17 67 44 2 100 23
    {
        for(j=i+1; j<len; j++) //5 1 3 9 8 4 6 5 2 3 11 --> 13 2 4 15 17 67 44 2 100 23
        {
            if(arr[i]>arr[j]) //2>5 W, 5>1, 1>3, 3>9, 9>8
            {
                temp = arr[i]; //0 = 5, 5=9
                arr[i] = arr[j]; //5 = 1, 9=8
                arr[j] = temp; //1 = 5, 8=9
            }
        }
    }
    
    return arr; //1,2,3,3,4,5,5,6,8,9,11. //2,2,4,11,13,15,17,23,44,67,100.
}

int findMaxElement(int len1, int len2, int* arr1, int* arr2)
{
    sortArray(len1, arr1);
    sortArray(len2, arr2);
    
    if(arr1[len1-1]>arr2[len2-1]) //11>100
    {
        return arr1[len1-1];
    }
    else
    {
        return arr2[len2-1]; //100.
    }
    
}

int main()
{
    int len1, len2, arr1[len1], arr2[len2];
    
    cout<<"Enter length of 1st array: "<<endl;
    cin>>len1; //12
    
    for(int i=0; i<len1; i++)
    {
        cin>>arr1[i]; //2 5 1 3 9 8 4 6 5 2 3 11
    }
    
    cout<<"Enter length of 2nd array: "<<endl;
    cin>>len2; //11
    
    for(int i=0; i<len2; i++)
    {
        cin>>arr2[i]; //11 13 2 4 15 17 67 44 2 100 23
    }
    
    cout<<findMaxElement(len1, len2, arr1, arr2);
    
    
}
