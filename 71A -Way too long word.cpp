#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n;
  string input;
  std::cout<<"Enter the word"<<std::endl;
  std::cin>>input;
  n=input.size();
  if(n>10)
 {
  std::cout<<input[0]<<input.size()-2<<input[n-1]<<std::endl;
 }
 if(n<10)
{ 
 std::cout<<input<<std::endl;
}
  return 0;
}


