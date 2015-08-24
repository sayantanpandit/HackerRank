/*
Program Name : Plus Minus
Link         : https://www.hackerrank.com/challenges/plus-minus
Author Name  : Sayantan Pandit
Date         : 14-08-2015 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, pos = 0, neg = 0, zero = 0;
  scanf("%d", &n);
  int arr[n];
  
  for(int i=0; i<n; i++)
  {
     scanf("%d", &arr[i]);
     
     if(arr[i] == 0)
        zero += 1;
     else if(arr[i] > 0)
        pos += 1;
     else if(arr[i] < 0)
        neg += 1;        
  }  
  
  printf("%.3f\n", ((float)pos / (float)n)); 
  printf("%.3f\n", ((float)neg / (float)n));
  printf("%.3f\n", ((float)zero / (float)n));    
  
  return 0;
}
