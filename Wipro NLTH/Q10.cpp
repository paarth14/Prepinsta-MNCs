//Question 10: Max - Min Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
    int add=0;
    
    for(int i=0 ; i<n ; i++)
    {
        maxSum = max(maxSum , arr[i]);
        minSum = min(minSum , arr[i]);
    }
    
    add = maxSum + minSum;
    
    cout<<add;
    
    // sort(arr , arr+n);
    
    // int maxSum = arr[n-1];
    // int minSum = arr[0];
    
    // int add = maxSum + minSum;
    
    // cout<<add;
    
    return 0;
}
