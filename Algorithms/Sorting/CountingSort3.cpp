/*
Program Name : Counting Sort 3
Link         : https://www.hackerrank.com/challenges/countingsort3
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
   char str[n][10];
   long long int arr[n];
   long long int brr[n];
   int count[100] = {0};
   
   for(long long int i = 0; i<n; i++)
      scanf("%lld %s", &arr[i], str[i]);
    
   for(long long int i=0; i<n; i++)  
      count[arr[i]] = count[arr[i]] + 1;
   
   for(int i = 1; i<100; i++)
      count[i] = count[i] + count[i-1];
   
   for(long long int i=0; i<=99; i++)
      printf("%d ", count[i]);  
  
   return 0;  
}
