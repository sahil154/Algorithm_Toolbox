#include<bits/stdc++.h>

using namespace std;

/*pair<int,int> MaxAndMin(char a[], int i, int j, int dp1[][n], int dp2[][n]) 
{
 pair<int,int> ab;
 ab.first=INT_MIN;
 ab.second=INT_MAX;
 for(int k=i;k<j;k++)
 {
  if(a[k]=='+')
  {int e=(dp1[i][k]) + (dp1[k+1][j]);
   int b=(dp1[i][k]) + (dp2[k+1][j]);
   int c=(dp2[i][k]) + (dp1[k+1][j]);
   int d=(dp2[i][k]) + (dp2[k+1][j]);
       ab.first=max(ab.first,max(max(e,b),max(c,d)));
  ab.second=min(ab.second,min(min(e,b),min(c,d)));
  }
  else if(a[k]=='-')
  {int e=(dp1[i][k]) - (dp1[k+1][j]);
   int b=(dp1[i][k]) - (dp2[k+1][j]);
   int c=(dp2[i][k]) - (dp1[k+1][j]);
   int d=(dp2[i][k]) - (dp2[k+1][j]);
       ab.first=max(ab.first,max(max(e,b),max(c,d)));
  ab.second=min(ab.second,min(min(e,b),min(c,d)));
  }
  else
   {int e=(dp1[i][k]) * (dp1[k+1][j]);
    int b=(dp1[i][k]) * (dp2[k+1][j]);
    int c=(dp2[i][k]) * (dp1[k+1][j]);
    int d=(dp2[i][k]) * (dp2[k+1][j]);
  ab.first=max(ab.first,max(max(e,b),max(c,d)));
  ab.second=min(ab.second,min(min(e,b),min(c,d)));}
}
return ab;
}*/


 long long max(long long a,long long b)
 {
      if(a>=b)
       return a;
       else 
       return b;
 }
  long long min(long long a,long long b)
 {
      if(a>=b)
       return b;
       else 
       return a;
 }

long long parenthesis(string a)
{
 int l=a.length();
 int n=l/2+1;
char arr[n-1];
 long long dp1[n][n];
 long long dp2[n][n];
 for(int i=0;i<n-1;i++)
  {dp1[i][i]=(long long)a[2*i]-48;
   dp2[i][i]=(long long)a[2*i]-48;
  arr[i]=a[2*i+1];}

  dp1[n-1][n-1]=(long long)a[l-1]-48,dp2[n-1][n-1]=(long long)a[l-1]-48;
  
  
  
 /* for(int q=0;q<n;q++)
 {for(int w=0;w<n;w++)
   cout<<dp1[q][w]<<" ";
   cout<<endl;}
   cout<<endl;
for(int q=0;q<n;q++)
{ for(int w=0;w<n;w++)
   cout<<dp2[q][w]<<" ";
   cout<<endl;}
   cout<<endl<<endl;
  for(int i=0;i<n-1;i++)
   cout<<arr[i]<<" ";
   cout<<endl;*/

 for(int s=1;s<=n-1;s++)
 {
    
     for(int i=0;i<n-s;i++)
   {
   int j=i+s;
   pair<long long,long long> ab;
   ab.first=INT_MIN;
   ab.second=INT_MAX;
   
    for(int k=i;k<j;k++)
    {
    if(arr[k]=='+')
    { long long e=dp1[i][k]+dp1[k+1][j];
      long long b=dp1[i][k]+dp2[k+1][j];
      long long c=dp2[i][k]+dp1[k+1][j];
      long long d=dp2[i][k]+dp2[k+1][j];
      ab.first=max(ab.first,max(max(e,b),max(c,d)));
     ab.second=min(ab.second,min(min(e,b),min(c,d)));
    }
     else if(arr[k]=='-')
      {long long e=dp1[i][k]-dp1[k+1][j];
       long long b=dp1[i][k]-dp2[k+1][j];
       long long c=dp2[i][k]-dp1[k+1][j];
       long long d=dp2[i][k]-dp2[k+1][j];
       ab.first=max(ab.first,max(max(e,b),max(c,d)));
       ab.second=min(ab.second,min(min(e,b),min(c,d)));
      }
      else
       {long long e=dp1[i][k]*dp1[k+1][j];
        long long b=dp1[i][k]*dp2[k+1][j];
        long long c=dp2[i][k]*dp1[k+1][j];
        long long d=dp2[i][k]*dp2[k+1][j];
        ab.first=max(ab.first,max(max(e,b),max(c,d)));
        ab.second=min(ab.second,min(min(e,b),min(c,d)));
       }

      dp1[i][j]=ab.first;
      dp2[i][j]=ab.second;
    }
}
}
/*for(int q=0;q<n;q++)
 {for(int w=0;w<n;w++)
   cout<<dp1[q][w]<<" ";
   cout<<endl;}
   cout<<endl;
for(int q=0;q<n;q++)
{ for(int w=0;w<n;w++)
   cout<<dp2[q][w]<<" ";
   cout<<endl;}*/
return dp1[0][n-1];
}



 
int main()
{ 
 string a;
 cin>>a;
 cout<<parenthesis(a);
 return 0;
}
 
 