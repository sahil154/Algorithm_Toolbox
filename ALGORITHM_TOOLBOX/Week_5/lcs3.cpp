#include<iostream>
using namespace std;



int longest(int arr[],int arr1[],int arr2[],int n,int m,int o)
{
 int dp[2][m+1][o+1];

for(int j=0;j<=m;j++) 
  for(int k=0;k<=o;k++)
   dp[0][j][k]=0;

for(int i=1;i<=1;i++)
 for(int j=0;j<=m;j++) 
  for(int k=0;k<=o;k++)
   if(j==0||k==0)
   dp[i][j][k]=0;

 

 for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++) 
   for(int k=1;k<=o;k++)
 {
 if(arr[i-1]==arr1[j-1]&&arr1[j-1]==arr2[k-1]) 
    dp[i%2][j][k]=1+dp[(i-1)%2][j-1][k-1];
 else
    dp[i%2][j][k]=max(max(max(dp[(i-1)%2][j][k],dp[i%2][j-1][k]),max(dp[i%2][j][k-1],dp[(i-1)%2][j-1][k-1])),max(dp[i%2][j-1][k-1],dp[(i-1)%2][j][k-1]));
 
}

/*for(int i=0;i<=n;i++)
 {for(int j=0;j<=m;j++) 
  {for(int k=0;k<=o;k++)
   cout<<dp[i][j][k]<<" ";
   cout<<endl;}
   cout<<endl;
}
   */
return dp[n%2][m][o];
 
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
 int k;
 cin>>k;
 int arr2[k];
 for(int i=0;i<k;i++) 
  cin>>arr2[i];
 cout<<longest(arr,arr1,arr2,n,m,k);
 return 0;
}