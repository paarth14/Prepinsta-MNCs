//Question 1 - Ebay Clients

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int noOfProducts;
    cin>>noOfProducts; //6
    
    int price[noOfProducts], distance[noOfProducts], sku[noOfProducts];
    
    for(int i=0; i<noOfProducts; i++)
    {
        cin>>price[i]; //87 103 229 41 8 86
    }
    
    for(int i=0; i<noOfProducts; i++)
    {
        cin>>distance[i]; //3 1 9 2 1 2
    }
    
    for(int i=0; i<noOfProducts; i++)
    {
        cin>>sku[i]; //7 -21 30 0 -4 -3
    }
    
    int final_price[noOfProducts];
    
    int count=0;
    
    for(int i=0; i<noOfProducts; i++)
    {
        if(sku[i]>0) //7>0, -21<0, 30>0
        {
            final_price[count] = price[i] * distance[i]; //87*3, 229*9, 
            count++; //1, 2 
        }
    }
    
    for(int i=0; i<count; i++)
    {
        cout<<"Final Price is: "<<endl<<final_price[i];
    }
    
    return 0;
}
