/*
Program Name : Ice Cream Parlor
Link         : https://www.hackerrank.com/challenges/icecream-parlor
Author Name  : Sayantan Pandit
Date         : 29-08-2015 
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int t, m, n;
  scanf("%d", &t);
  
  while(t--)
  {
    scanf("%d %d", &m, &n);
    int arr[n];
    for(int i=0; i<n; i++)
       scanf("%d", &arr[i]);
    
    for(int i=0; i<n; i++)
    { 
       for(int j=i+1; j<n; j++)
       {
          if(arr[i]+arr[j] == m)
          {
            printf("%d %d\n", i+1, j+1);
            break;
          }
       }
    }
  }
  
  return 0;
}
