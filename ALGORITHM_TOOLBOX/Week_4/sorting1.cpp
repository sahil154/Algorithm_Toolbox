
#include<iostream>
using namespace std;

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

void partition(int arr[],int low,int high,int &i,int &j)
{
  int pivot=arr[high];
  int pi=low;
  int tr=low;
  for(int i=low;i<high;i++)
   {
     if(arr[i]<pivot)
      {
       swap(&arr[i],&arr[tr]);
       pi++,tr++;
       }
     else if(arr[i]==pivot)
      {
       swap(&arr[i],&arr[tr+1]);
       pi++;
      }
   }
 swap(&arr[pi],&arr[high]);
 i=tr-1;
 j=pi+1;
}


void quickSort(int arr[],int low,int high)
{ 
   if(low<high)
   { srand(time(NULL)); 
    int random = low + rand() % (high - low); 
 
    swap(&arr[random], &arr[high]); 
    int i,j;
    int p1=partition(arr, low, high,i,j);

    quickSort(arr,low,i);
    quickSort(arr,j,high);}
}

int main()
{
 int n;
cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
quickSort(arr,0,n-1);
for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
return 0;
}