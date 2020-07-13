#include<iostream>
#include<cstdlib>
using namespace std;

int partition(int arr[], int low, int high,int count) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1);
    int count1=1;  
    for (int j = low; j <= high - 1; j++) { 
        if (arr[j] <= pivot) { 
            i++; 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    int p=i+1;
     for(int j=p-1;j>=0;j--)
       if(arr[j]==arr[p])
        count1++;
       else 
        break;
    for(int j=p+1;j<=high-1;j++)
       if(arr[j]==arr[p])
        count1++;
       else
        break;
    if(count1>count)
     {cout<<"1";
     exit(0);}
    return p ; 
} 

int partition_r(int arr[], int low, int high,int count) 
{
    srand(time(NULL)); 
    int random = low + rand() % (high - low); 
 
    swap(arr[random], arr[high]); 
  
    return partition(arr, low, high,count); 
} 
  
void quickSort(int arr[], int low, int high,int count) 
{ 
    if (low < high) { 
        int pi = partition_r(arr, low, high,count); 
        quickSort(arr, low, pi - 1,count); 
        quickSort(arr, pi + 1, high,count); 
    } 
} 
  

int main()
{
 int n;
 cin>>n;
 int count=n/2,count1=1;;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 quickSort(arr,0,n-1,count);
 
 for(int i=0;i<n-1;i++)
   if(arr[i]==arr[i+1])
     count1++;
    else
     break;
 if(count1>count)
   {cout<<"1";
exit(0);}

 for(int i=n-1;i>0;i--)
   if(arr[i]==arr[i-1])
     count1++;
    else
     break;
 if(count1>count)
   {cout<<"1";
    exit(0);}
 cout<<"0";
 return 0;
}

