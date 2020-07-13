#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

   int index1=-1,index2=-1;
    
    for(int i=0;i<n;i++)
       if(index1==-1||numbers[i]>numbers[index1])
         index1=i;

  for(int i=0;i<n;i++)
   if((i!=index1)&&(index2==-1||numbers[index2]<numbers[i]))
       index2=i;

return (long long)(numbers[index1])*numbers[index2];
  
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers)<< "\n";
    return 0;
}
