#include<iostream>
int main()
{
  int n;
  std::cout<<"Enter the weight of the watermelon"<<std::endl;
  std::cin>>n;
  if(n%2==0)
  {
      std::cout<<"YES"<<std::endl;
  }
 if(n%2!=0)
 {
      std::cout<<"NO"<<std::endl;
}
return 0;
}
