//Question 11:  Count long int

#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int n;
     cout<<"Enter the number : ";
     cin>>n;
     
     int targetElement;
     cout<<"Enter target element : ";
     cin>>targetElement;
     
     int count=0;
     int rem=0;
     
     while(n!=0)
     {
         rem = n%10;
         if(rem == targetElement){
             count++;
         }
         n = n/10;
     }
     
     cout<<"Count : "<<count;
     
    return 0;
}
