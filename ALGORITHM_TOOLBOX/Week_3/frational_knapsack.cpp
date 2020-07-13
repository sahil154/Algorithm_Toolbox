#include<iostream>
using namespace std;

double maximum(int val[],int w[],int n,int W)
{
 double cap=0;
 int i=0,tr=0,a=0;
 while(i<n)
 {
  double max=0;
 for(int j=0;j<n;j++)
  if((double)val[j]/w[j]>max&&val[j]!=-1)
  { max=(double)val[j]/w[j];
   tr=j;}

if(W==w[tr])
 {cap+=val[tr];
  W=W-w[tr];}
else
 {a=W<w[tr]?W:w[tr];
 cap=cap+a*((double)(val[tr])/w[tr]);
 W=W-a;}
 if(W==0)
 break;
 val[tr]=-1;
i++;
}
return cap;
}
 
int main()
{
 int n,W;
 cin>>n>>W;
 int val[n],w[n];
 for(int i=0;i<n;i++)
  cin>>val[i]>>w[i];

 cout<<maximum(val,w,n,W)<<endl;
 return 0;
}

