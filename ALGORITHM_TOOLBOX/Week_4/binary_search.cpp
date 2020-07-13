#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int k)
{
 int begin=0,end=n-1;
 int mid=begin+(end-begin)/2;

 while(begin<=end)
 {
  int mid=begin+(end-begin)/2;

  if(arr[mid]==k)
   return mid;
  else if(arr[mid]>k)
   end=mid-1;
  else
   begin=mid+1;
 }
return -1;
}

  
int main()
{ 
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i]; 
 int k;
 cin>>k;
 int arr1[k];
 for(int i=0;i<k;i++)
  {cin>>arr1[i];
  cout<<binarySearch(arr,n,arr1[i])<<" ";}
return 0;
}
 