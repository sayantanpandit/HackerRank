/*
Program Name : Diagonal Difference
Link         : https://www.hackerrank.com/challenges/diagonal-difference
Author Name  : Sayantan Pandit
Date         : 12-08-2015 
*/

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
    int arr[n][n];
    int lsum = 0, rsum = 0;
    
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
         scanf("%d", &arr[i][j]);
         if(i == j)
           lsum = lsum + arr[i][j];
         if(j == (n-1-i))
           rsum = rsum + arr[i][j];
       }       
    }
    
    
    if(lsum >= rsum)
        printf("%d\n", (lsum-rsum));
    else if(lsum < rsum)
        printf("%d\n", (rsum-lsum));
    
    return 0;
}
