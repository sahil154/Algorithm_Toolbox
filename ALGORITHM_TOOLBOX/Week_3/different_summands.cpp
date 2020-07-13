#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void candies(int n)
{
 vector<int> g;
 int prev=0,temp=n,count=0;
 while(temp!=0)
 {
  prev++;
   temp-=prev;
  if(temp>prev) 
   {g.push_back(prev);
    count++;}
  else 
   {
     g.push_back(temp+prev);
    count++;
    break;
   }
 }
 cout<<count<<endl;
 for(int i=0;i<count;i++)
  cout<<g[i]<<" ";
}

int main()
{ 
 int n;
cin>>n;
 candies(n);
return 0;
}
