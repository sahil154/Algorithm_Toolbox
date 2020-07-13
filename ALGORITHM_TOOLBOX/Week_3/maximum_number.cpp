#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Largest_Salary(vector<string> Nums, int n);
bool GreaterOrEqual(string& a , string& b); 

void swap(string& a, string& b)  
{  
    string temp = a;  
    a = b;  
    b = temp;  
}

int main() {
	int n;
	cin >> n;
	vector<string> Nums(n);
	for (size_t i = 0; i < n; i++) {
		cin >> Nums[i];
	}
	 Largest_Salary(Nums, n);
}
void Largest_Salary(vector<string> Nums, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (GreaterOrEqual(Nums[j], Nums[j + 1]))
				swap(Nums[j], Nums[j + 1]); 
		}
	}
	for(int i=0;i<n;i++)
	  cout<<Nums[i];
}
bool GreaterOrEqual(string& a, string& b) {
	return(b + a > a + b);
}
