//Question 16: Multiply & Sum

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    int sum=0;
    
    for(int i=1; i<=10; i++)
    {
        cout<<n*i<<" ";
        
        sum += (n*i);
    }
    
    cout<<endl;
    
    cout<<sum<<endl;
    
    return 0;
}
