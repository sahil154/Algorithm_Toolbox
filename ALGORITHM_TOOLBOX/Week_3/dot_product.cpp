#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long adver(long long arr[],long long arr1[],int n)
{
 sort(arr,arr+n);
 sort(arr1,arr1+n);
 long long res=0;
 for(int i=0;i<n;i++)
  res=res+arr[i]*arr1[i];
return res;
}

 
int main()
{
 int n;
cin>>n;
 long long arr[n],arr1[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 for(int i=0;i<n;i++)
  cin>>arr1[i];
 cout<<adver(arr,arr1,n)<<endl;
return 0;
}