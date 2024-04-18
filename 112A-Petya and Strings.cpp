#include<bits/stdc++.h> 
using namespace std;
int main()
{
 string s1,s2;
 std::cout<<"Enter the strings"<<std::endl;
 std::cin>>s1;
 std::cin>>s2;
 int res=0;
transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
 for(int i=0;i<=s1.size();i++)
 {  
     if(int(s1[i])==int(s2[i]))
     {
        continue;
     }
    if(int(s1[i])>int(s2[i]))
     {
        res=1;
        break;
     }
    if(int(s1[i])<int(s2[i]))
     {
        res=-1;
        break;
     }
}
std::cout<<res<<std::endl;
return 0;
}
  
