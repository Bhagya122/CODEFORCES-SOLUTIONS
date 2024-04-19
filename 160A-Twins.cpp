#include <iostream>
#include<bits/stdc++.h>
int main() {
    int n,max_sum,min_coins,arr[n],sum;
    std::cout<<"Enter the number of coins :"<<std::endl;
    std::cin>>n;
    std::cout<<"Enter the values of coins :"<<std::endl;
    for(int i=0;i<=n-1;i++)
    {
        std::cin>>arr[i];
        sum=sum+arr[i];
    }
    int x = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr,arr+x);
    for(int i=n-1;i>=0;i--)
    { 
        max_sum=max_sum+arr[i];
        min_coins++;
        if(max_sum>sum/2){
            break;
        }
    }
    std::cout<<min_coins<<std::endl;
    return 0;
}
