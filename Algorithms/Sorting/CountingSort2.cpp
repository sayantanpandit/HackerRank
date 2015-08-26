/*
Program Name : Counting Sort 2
Link         : https://www.hackerrank.com/challenges/countingsort2
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
   long long int brr[n];
   int count[100] = {0};
   
   for(long long int i = 0; i<n; i++)
      scanf("%lld", &arr[i]);
    
   for(long long int i=0; i<n; i++)  
      count[arr[i]] = count[arr[i]] + 1;
   
   for(int i = 1; i<100; i++)
      count[i] = count[i] + count[i-1];
   
   for(long long int i = n-1; i>=0; i--)
   {
      brr[count[arr[i]]] = arr[i];
      count[arr[i]] = count[arr[i]] - 1;
   }
   
   
   for(long long int i=1; i<=n; i++)
      printf("%lld ", brr[i]);  
  
   return 0;  
}
