#include<iostream>
#include<string>
using namespace std;

int main()
{  
  string input;
  std::cout<<"Please enter the word"<<std::endl;
  std::cin>>input;
   string temp=tolower(input);
  for(int i=0;i<=temp.size();i++)
{
  if(temp[i]='a' || temp[i]='e' || temp[i]='i' ||temp[i]='o' || temp[i]='u' || temp[i]='y')
  {
     continue;
  }
  else
  {
     std::cout<<"."<<temp[i];
  }
}
return 0;
}


  
