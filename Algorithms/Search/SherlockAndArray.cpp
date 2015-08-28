/*
Program Name : Sherlock and Array
Link         : https://www.hackerrank.com/challenges/sherlock-and-array
Author Name  : Sayantan Pandit
Date         : 28-08-2015 
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int t, flag;
   scanf("%d", &t);
   unsigned long long int n, sumL, sumR;
   
   while(t--)
   {
     scanf("%llu", &n);
     unsigned long long int arr[n];
     flag = 0, sumL = 0, sumR = 0;
     
     for(long long int i=0; i<n; i++)
     {
       scanf("%llu", &arr[i]);
       sumR = sumR + arr[i];
     }
         
     for(long long int i=0; i<n; i++)
     {
        sumR = sumR - arr[i];
        if(i > 0)
          sumL = sumL + arr[i-1];
        
        if(sumL == sumR)
             flag = 1;
     }
     if(flag == 0)
        printf("NO\n");
     else 
        printf("YES\n");   
   }
   return 0;
}
