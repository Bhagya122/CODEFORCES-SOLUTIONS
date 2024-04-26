#include <iostream>
#include<string>
#include<bits/stdc++.h>
int main() 
{
    string s;
    std::cout << "Enter the word" << std::endl;
    std::cin >> s;
    string temp="hello";
    int count,j=0;
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]==temp[j])
        {
            count++;
            j++;
        }
        if(count==5)
        {
            break;
        }
    }
    if(count==5)
    {
        std::cout<<"YES"<<std::endl;
    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
    
    return 0;
}
