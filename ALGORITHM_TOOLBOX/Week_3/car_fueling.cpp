#include<iostream>
using namespace std;

int fueling(int arr[],int d,int m,int n)
{
  
 int count=0,curr=0;
  if(d-arr[n-2]>m)
    return -1;
while(curr<=n-2)
{ 
 int last=curr;
 while(curr<=n-2&&arr[curr+1]-arr[last]<=m)
  curr++;
 if(curr==last)
  return -1;
 if(curr<=n-2)
  count++;
}
return count;
  //if(arr[curr]+m>=d)
  // return count;
   //cout<<count<<endl;
} 


int main()
{
 int d,m,n;
 cin>>d>>m>>n;
 int arr[n+2];
 arr[0]=0,arr[n+1]=d;
 for(int i=1;i<=n;i++)
 cin>>arr[i];
cout<<fueling(arr,d,m,n+2)<<endl;
return 0;
}
 