/*
Program Name : Counting Sort 1
Link         : https://www.hackerrank.com/challenges/countingsort1
Author Name  : Sayantan Pandit
Date         : 26-08-2015 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   long long int n;   
   scanf("%lld", &n);
   long long int arr[n];
   int count[100] = {0};
   
   for(long long int i = 0; i<n; i++)
      scanf("%lld", &arr[i]);
    
   for(long long int i=0; i<n; i++)
      count[arr[i]] = count[arr[i]] + 1;
   
   for(int i=0; i<100; i++)
      printf("%d ", count[i]);  
  
  return 0;  
}
