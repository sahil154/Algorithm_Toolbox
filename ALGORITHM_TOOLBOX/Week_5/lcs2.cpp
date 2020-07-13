#include<iostream>
using namespace std;

int longest(int arr[],int arr1[],int n,int m)
{
 int dp[n+1][m+1];
 for(int i=0;i<=n;i++)
  dp[i][0]=0;
 for(int j=0;j<=m;j++)
  dp[0][j]=0;

 for(int i=1;i<=n;i++) 
  for(int j=1;j<=m;j++)
 {
 if(arr[i-1]==arr1[j-1])
  dp[i][j]=1+dp[i-1][j-1];
 else
  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
}
return dp[n][m];
}


int main()
{
 int n,m;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 cin>>m;
 int arr1[m];
 for(int j=0;j<m;j++)
  cin>>arr1[j];
 cout<<longest(arr,arr1,n,m);
 return 0;
}