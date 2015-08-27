/*
Program Name : AND Product
Link         : https://www.hackerrank.com/challenges/and-product
Author Name  : Sayantan Pandit
Date         : 27-08-2015 
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
   unsigned long long int a, b, res;
   scanf("%d", &t);
    
   while(t--)
   {  
     scanf("%lld %lld", &a, &b); 
     res = a;
     for(unsigned long long int i=a+1; i<=b; i++)
          res = res & i;
     printf("%llu\n", res);
   } 
   return 0;
}
