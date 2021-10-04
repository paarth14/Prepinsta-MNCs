//Question 8: Even & Odd Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long int num;
    cout<<"Enter the number : ";
    cin>>num;

    int sumEven=0;
    int sumOdd=0;
    int rem=0;
    int diff=0;
    
    while(num!=0)
    {
        rem = num%10;
        if(rem%2 == 0)
        {
            sumEven += rem;
        }
        else
        {
            sumOdd += rem;
        }
        
         num = num/10;
    }
    
    if(sumOdd>sumEven)
    {
        diff = (sumOdd-sumEven);
    }
    else
    {
        diff = (sumEven-sumOdd);
    }
    
    cout<<"Difference is : "<<diff;
    
    return 0;
}
