#include<bits/stdc++.h> 
using namespace std;
int main()
{
    string s,temp;
    std::cout<<"enter the addtion to be done"<<std::endl;
    std::cin>>s;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]!='+')
        {
            temp.push_back(s[i]);
        }
    }
    sort(temp.begin(),temp.end());
    std::cout<<temp[0];
    for(int i=1;i<=temp.size()-1;i++)
    {
        std::cout<<"+"<<temp[i];
    }
   return 0;
    
}
