// Question 3: Password Checker


#include<bits/stdc++.h>
using namespace std;

int CheckPassword(string str)
{
    bool num = false;
    bool cap = false;
    
    if(str.length()<4)
    {
        return 0;
    }
    
    if(str[0]>=0 and str[0]<=9)
    {
        return 0;
    }
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ' or str[i] == '/')
        {
            return 0;
        }
        
        else if(str[i]>='0' && str[i]<='9')
        {
            num = true;
        }
        
        else if(str[i]>='A' && str[i]<='Z')
        {
            cap = true;
        }
    }
    
    int res = (num && cap);
    
    return res;
}

int main()
{
    string str;
    getline(cin, str);
    cout<<CheckPassword(str);
}
