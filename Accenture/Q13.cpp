//Question 13: Max Exponents 

#include<bits/stdc++.h>
using namespace std;

int count(int n){
    
    int c = 0;
    
    while (n % 2 == 0 && n != 0){ 
     
     c++; //c=3
     n = n / 2; //n=4 n=2 n=1
        
    }
return c;
    
}

int maxExponents(int a, int b){
    
    int max = 0, num = 0, ans;
    
    for (int i = a; i <= b; i++){ //7 to 12
    
       int temp = count(i); //temp = 8
       
       if (temp > max){ //8>0
         
         max = temp; //max = 8
         num = i; //num=8
        }
        
    }
   
   return num;
} 

int main () 
{
  int a, b;
  cout<<"Enter first number: "<<endl;
  cin>>a;
  
  cout<<"Enter Second number: "<<endl;
  cin>>b;
 
  cout<<maxExponents(a, b);
   
  return 0;
}
