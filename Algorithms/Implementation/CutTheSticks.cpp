#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, min = 1000, temp;
  scanf("%d", &n);
  int arr[n], count = n;
  
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
    if(min > arr[i])
       min = arr[i];       
  } 
  while(count > 1)
  {
    printf("%d\n", count);
    temp = min;
    for(int i=0; i<n; i++)
    {
     arr[i] = arr[i] - temp;
  printf("arr[%d] :: %d --- min : %d\n", i, arr[i], min);
     if(min > arr[i] && arr[i] > 0)
       min = arr[i];
     if(arr[i] <= 0)
       count--;
    }    
  }
  return 0;
}
