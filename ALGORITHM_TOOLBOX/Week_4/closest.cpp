#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;


bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

double distance(vector<pair<int,int>> v,int x,int y)
{
 return sqrt((((v[y].first-v[x].first)*(v[y].first-v[x].first)) + ((v[y].second-v[x].second)*(v[y].second-v[x].second))));
}

double closest(vector<pair<int,int>> v,int l,int r)
{
 if(l+1<r)
 {int mid=l+(r-l)/2;
  int comp=v[mid].first;
  double c1=closest(v,l,mid);
  double c2=closest(v,mid+1,r);
  double d=min(c1,c2);
  
  vector<pair<int,int>> strip;
 for(int i=0;i<=r;i++)
  if((double)(abs(v[i].first-comp))<d)
   strip.push_back(v[i]);

sort(strip.begin(),strip.end(),sortbysec);

  double min=d;
  int f,g;
 for (int i = 0; i < strip.size(); ++i)  
        for (int j = i+1; j < strip.size() && (strip[j].second - strip[i].second) < min; ++j)  
            if (distance(v,i,j) < min)  
                min = distance(v,i,j); 
               
  

return min;
    
  }
 else
  return distance(v,l,l+1);
}

 
int main()
{
 int n;
vector<pair<int,int>> v;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  int a,b;
 cin>>a>>b;
 v.push_back(make_pair(a,b));
 }

 sort(v.begin(),v.end());
 cout<<fixed<<setprecision(4)<<closest(v,0,n-1)<<endl;
 return 0;
}