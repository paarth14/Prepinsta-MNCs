// Question 9: Move the Hyphen

#include<bits/stdc++.h>
using namespace std;

string MoveHyphen(string str)
{
    string hypen = "";
    string not_hypen = "";
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '-')
        {
            hypen += str[i];
        }
        else
        {
            not_hypen += str[i];
        }
    }
    
    return hypen+not_hypen;
}

int main()
{
    
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin, str);
    
    cout<<MoveHyphen(str);
}
