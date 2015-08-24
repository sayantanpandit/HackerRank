/*
Program Name : Angry Professor
Link         : https://www.hackerrank.com/challenges/angry-professor
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
   int t, n, k, count;
   scanf("%d", &t);
      
   while(t--)
   {
      count = 0;
      scanf("%d %d", &n, &k);
      int arr[n];   
   
      for(int i=0; i<n; i++)
      {
         scanf("%d", &arr[i]);
         if(arr[i] <= 0)
           count = count + 1;
      }
      if(count < k)
          printf("YES\n");
      else
          printf("NO\n");
   }
}
