#include<iostream>
using namespace std; 
  
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
void partition(int a[], int low, int high, int &i, int &j) 
{ 
    if (high - low <= 1) 
    { 
        if (a[high] < a[low]) 
            swap(&a[high], &a[low]); 
        i = low; 
        j = high; 
        return; 
    } 
  
    int mid = low; 
    int pivot = a[high]; 
    while (mid <= high) 
    { 
        if (a[mid]<pivot) 
            swap(&a[low++], &a[mid++]); 
        else if (a[mid]==pivot) 
            mid++; 
        else if (a[mid]>pivot) 
            swap(&a[mid], &a[high--]); 
    } 
 
    i = low-1; 
    j = mid; //or high-1 
} 
   
void quicksort(int a[], int low, int high) 
{ 
    if (low>=high) //1 or 0 elements 
        return; 
  
    int i, j; 
  
    // Note that i and j are passed as reference 
    partition(a, low, high, i, j); 
  
    // Recur two halves 
    quicksort(a, low, i); 
    quicksort(a, j, high); 
} 
  
int main()
{
 int n;
cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
quicksort(arr,0,n-1);
for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
return 0;
}