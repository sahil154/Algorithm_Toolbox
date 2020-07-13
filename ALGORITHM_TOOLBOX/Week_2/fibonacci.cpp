#include<iostream>
using namespace std;

long long fib(int n)
{
 long long arr[n+1];
 arr[0]=0;
 arr[1]=1;
 for(int i=2;i<n+1;i++)
  arr[i]=arr[i-1]+arr[i-2];
 return arr[n];
}

int main()
{
  int a;
cin>>a;
cout<<fib(a)<<endl;
}

