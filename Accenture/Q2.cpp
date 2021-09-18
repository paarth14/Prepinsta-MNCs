// Question 2: Binary Number System using BITWISE

#include<bits/stdc++.h>
using namespace std;

char AND(char a, char b)
{
    if(a=='1' and b=='1')
    {
        return '1';
    }
    return '0';
}

char OR(char a, char b)
{
    if(a=='0' and b=='0')
    {
        return '0';
    }
    return '1';
}

char XOR(char a, char b)
{
    if(a==b)
    {
        return '0';
    }
    return '1';
}

int OperationsBinaryString(string s)
{
    if(s.length() == 0)
    {
        return -1;
    }
    
    char res1 = s[0]; //1C0C1C1A0B1 res1=1  //0C1A1B1C1C1B0A0
    
    for(int i=1; i<s.length(); i+=2)
    {
        char op = s[i];
        char res2 = s[i+1];
        
        if(op == 'A')
        {
            res1 = AND(res1, res2);
        }
        
        else if(op == 'B')
        {
            res1 = OR(res1, res2);
        }
        
        else
        {
            res1 = XOR(res1, res2);
        }
    }
    
    if(res1 == '1')
    {
        return 1;
    }
    
    return 0;
}



int main()
{
    string str;
    cin>>str;
    cout<<OperationsBinaryString(str);
    
    return 0;
}
