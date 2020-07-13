#include <iostream>
using namespace std;

int gcd(int a,int b)
{
int res=0;
  int max=a>b?a:b;
  int min=a<b?a:b;
  while(min!=0)
   {
    int temp=max%min;
      max=min;
      min=temp;
      
   }
return max;
}

int main()
{
 int a,b;
cin>>a>>b;
int temp=gcd(a,b);
long long res=((long long)(a)*b)/temp;
cout<<res<<endl;
}
