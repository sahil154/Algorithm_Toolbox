#include<iostream>
using namespace std;

int main()
{
  long long n;
  cin>>n;
  
  int res1=(n+1)%60;
  int res2=n%60;
  
  if(n==0||n==1)
    {cout<<n<<endl;
   return 0;}
  int pre=0,curr=1,res=1,count=1,res3=0;
  int max=res1>res2?res1:res2;
  int min=res1<res2?res1:res2;
  while(count!=max)
 {
  if(max==0)
    { res3=0;
      res=0;
      break;}
  res=(pre+curr)%10;
  pre=curr;
  curr=res; 
  count++;
 if(count==min)
  res3=res;
 }
if(res1==res2)
  res3=res;

cout<<(res3*res)%10<<endl;
return 0;
}

 
   
 