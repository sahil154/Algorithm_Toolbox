#include<bits/stdc++.h> 
using namespace std; 
  
long long fib(long long n) {

    n = (n+2)%60;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    int res = 1;
    for(int i = 2; i<=n;i++){
        fib[i] = (fib[i-1]%10 + fib[i-2]%10)%10;
        // res = res + fib[i];
    }
    // cout<<fib[n]<<"\n";
    if(fib[n] == 0){
        return 9;
    }
    return (fib[n]%10-1);
}

  
int main() 
{ 
    long long m,n; 
    cin>>m>>n;
     
    int res1=fib(n);
    int res2=fib(m - 1); 
    if(res1<res2)
      n=(res1+10)-res2;
    else
     n=res1-res2;
    cout <<n<< endl; 
} 