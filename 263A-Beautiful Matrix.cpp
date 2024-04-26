#include<iostream>
#include<cmath>

int main()
{ 
  int mat[5][5];
    for(int i=0;i<=4;i++)
    {
      for(int j=0;j<=4;j++)
        {
            std::cin>>mat[i][j];
        }
    }
    for(int i=0;i<=4;i++)
      {
        for(int j=0;j<=4;j++)
          {
              if(mat[i][j]==1)
              {
                  std::cout<<abs(i-3)+abs(j-3)<<std::endl;
              }  
          }
        }
   return 0;
}


  
