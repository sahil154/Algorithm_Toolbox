#include<iostream>
using namespace std;

void merge1(int Ls1[],int sz1,int Ls2[],int sz2,int Ls[],int &count)
{
  int i, j, k;
  i = j = k = 0;
  while (i < sz1 && j < sz2)
  {
    if (Ls1[i] <= Ls2[j])
    {
      Ls[k] = Ls1[i];
      i++;
    }
    else
    {
        //count++;
      Ls[k] = Ls2[j];
      j++;
     int temp=Ls2[j-1];
     for(int a=i;a<sz1&&temp<Ls1[a];a++)
       count++;
    }
    k++;
  }

  while (i < sz1)
  {
    Ls[k] = Ls1[i];
    i++;
    k++;
  }
  while (j < sz2)
  {
    Ls[k] = Ls2[j];
    j++;
    k++;
  }
}

void mergeSort_rec(int Ls[], int sz,int &count)
{  if (sz < 2)
        return;
    int i = 0;
    int mid;
    mid = sz / 2;
    int Ls1[mid];
    int Ls2[sz - mid];
    for (int j = 0; j < mid; j++, i++)
        Ls1[j] = Ls[i];

    for (int k = 0; k < sz - mid; k++, i++)
        Ls2[k] = Ls[i];

    mergeSort_rec(Ls1, mid,count);
    mergeSort_rec(Ls2, sz - mid,count);

    merge1(Ls1, mid, Ls2, sz - mid, Ls,count);
    // cout<<count<<endl;
    return ;
}

int main()
{
 int n,count=0;
cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
mergeSort_rec(arr,n,count);
cout<<count<<endl;
return 0;
}

