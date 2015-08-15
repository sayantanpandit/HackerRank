#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  long long int arr[n];
  long long int sum = 0;
  
  for(int i=0; i<n; i++)
  {
     scanf("%lld", &arr[i]);
     sum = sum + arr[i];           
  }
   
   printf("%lld\n", sum);
  
  return 0;  
}
