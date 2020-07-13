#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
       return a.second<b.second; 
} 

void signature(pair<int,int> arr[],int n)
{
 sort(arr,arr+n,sortbysec);
  int count=1,prev=arr[0].second;
vector<int> g;
g.push_back(prev);
 

 for(int i=1;i<n;i++)
  {
   if(arr[i].second>=prev&&arr[i].first<=prev)
       continue;
   else if(arr[i].first>prev)
      prev=arr[i].second;
      g.push_back(prev);
      count++;
  }

cout<<count<<endl;
for(int i=0;i<count;i++)
 cout<<g[i]<<" ";

}    

int main()
{ 
 int n;
 cin>>n;
 pair<int,int> arr[n];
 for(int i=0;i<n;i++)
 cin>>arr[i].first>>arr[i].second;

 signature(arr,n);
return 0;
}