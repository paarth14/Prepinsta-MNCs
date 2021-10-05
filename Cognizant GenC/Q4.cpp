//Question 4: Ratan & Stock Market

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int days[7];
    cout<<"Enter stock price of each day : ";
    for(int i=0 ; i<7 ; i++){
        cin>>days[i];
    }
    
    sort(days , days+7);
    
    int buyingPrice = days[0];
    int maxSellingPrice = days[6];
    
    cout<<"Maximum profit earned : "<<(maxSellingPrice-buyingPrice);
    
    return 0;
}
