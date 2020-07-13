#include<iostream>
#include<bits/stdc++.h>
 using namespace std;

int money(int arr[],int sum)
{
 int dp[4][sum+1];
 for(int i=0;i<=sum;i++)
   dp[0][i]=INT_MAX-1;
 for(int i=1;i<=3;i++) 
   dp[i][0]=0;
 for(int i=1;i<=sum;i++)
   {
    if(i%arr[0]==0)
      dp[1][i]=i/arr[0];
    else
      dp[1][i]=INT_MAX-1;
   }
 for(int i=2;i<=3;i++)
  for(int j=1;j<=sum;j++)
   {
    if(arr[i-1]<=j)
     dp[i][j]=min(1+dp[i][j-arr[i-1]],dp[i-1][j]);
    else 
     dp[i][j]=dp[i-1][j];
   }
 return dp[3][sum];
}
      



 int main()
{
 int arr[]={1,3,4};
 int sum;
cin>>sum;
 cout<<money(arr,sum)<<endl;
return 0;
}
