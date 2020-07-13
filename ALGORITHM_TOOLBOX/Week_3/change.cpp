#include<iostream>
using namespace std;

int calculate(int arr[],int n,int a)
{
 int c=0,i=0,a1=0,a2=a;
 while(i<n)
{
 int track=a2/arr[i];
 a1=a1+track*arr[i];
 
 a2=a2-track*arr[i];
 c=c+track;
 if(a%arr[i]==0)
 break;
 i++;
}
 return c;
}
 

int main()
{
 int arr[]={10,5,1};
 int a;
 int n=3;
cin>>a;
cout<<calculate(arr,n,a)<<endl;
return 0;
}