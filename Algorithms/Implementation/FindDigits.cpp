/*
Program Name : Find Digits
Link         : https://www.hackerrank.com/challenges/find-digits
Author Name  : Sayantan Pandit
Date         : 17-08-2015 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    long long int n, k, temp, count;
    scanf("%lld", &t);
    
    while(t--)
    {
      scanf("%lld", &n);
      k = n;
      count = 0;
      while(k!=0)
      {
         temp = k % 10;
         if((temp != 0) && (n%temp == 0))      
            count++;
         k = k/10;
      }
      printf("%lld\n", count);
    }
    
    return 0;
}
