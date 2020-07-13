#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void lottery(vector<pair<int,int>> v,int s,int poin[],int count[],int p)
{
sort(v.begin(),v.end());
 for(int i=0;i<p;i++)
   {
      int k=0;
     for(int j=0;j<s;j++)
     {
      if(poin[i]<v[j].first)
        j=s;
      else if(poin[i]>=v[j].first&&poin[i]<=v[j].second)
       k++;
     }
   count[i]=k;
}
}


 
int main()
{
 int s,p,a,b;
 cin>>s>>p;
 vector <pair<int,int>> v;
 for(int i=0;i<s;i++)
   { cin>>a>>b;
    v.push_back(make_pair(a,b));}
 int poin[p],count[p];
 for(int i=0;i<p;i++)
    cin>>poin[i];
   //sort(v.begin(),v.end());  
lottery(v,s,poin,count,p);
for(int i=0;i<p;i++)
 cout<<count[i]<<" ";

return 0;
}