/*
Program Name : Sherlock and Squares
Link         : https://www.hackerrank.com/challenges/sherlock-and-squares
Author Name  : Sayantan Pandit
Date         : 19-08-2015 
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
  long long int a, b, count;
  scanf("%d", &t);
  
  while(t--)
  {
     count = 0;
     scanf("%lld %lld", &a, &b);
     
     count = (long)(floor(sqrt(b)) - ceil(sqrt(a)) + 1);
     printf("%lld\n", count);
  }
  
  return 0;
}
