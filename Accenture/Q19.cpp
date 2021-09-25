//Question 19: Max In Array

#include<bits/stdc++.h>
using namespace std;

int MaxInArray(int arr[], int n)
{
    // int max = 0, index = -1;
  
    // for (int i = 0; i < n; i++)
    // {
    //   if (arr[i] > max){
          
	   // max = arr[i];
	   // index = i;
          
    //   }
    // }
    
    sort(arr, arr+n);
    
    int max = arr[n-1];
    
    int index = n-1;
    
    cout<<max<<endl<<index;
    
}

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Element: "<<endl;
        cin>>arr[i];
    }
    
    MaxInArray(arr, n);
    
    return 0;
}
