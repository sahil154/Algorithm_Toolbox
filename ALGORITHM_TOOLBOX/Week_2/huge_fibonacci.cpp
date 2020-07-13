#include<iostream>
using namespace std;

int pisano(int m)
{
 if(m==1||m==0)
return m;
 int a=0,b=1,c=a+b,count=0;
  while(1)
  {
   c=(a+b)%m;
   a=b;
   b=c;
   count++;
  if(a==0&&b==1)
    break;
   
  }
 return count;
}
   
int main()
{
 long long n;
int m;
 cin>>n>>m;
 int res=pisano(m);
int t=n%res;
if(t==0)
{ cout<<t<<endl;
 return 0;}
 int pre=0,curr=1,count=1;
 res=1;
 while(count!=t)
 {
  res=(curr+pre)%m;
  pre=curr;
  curr=res;
  count++;
  }
cout<<res<<endl;
return 0;
}