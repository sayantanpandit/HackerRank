/*
Program Name : Sansa and XOR
Link         : https://www.hackerrank.com/challenges/sansa-and-xor
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
   long long int n, num, res;
   scanf("%d", &t);
    
   while(t--)
   {  
     scanf("%lld", &n); 
     res = 0;
     for(long long int i=0; i<n; i++)
     { 
      scanf("%lld", &num);
   
      long long int temp = (i+1)*(n-i);
      if(temp % 2 == 1)
        res = res ^ num;      
    }
    printf("%lld\n", res);
   } 
   return 0;
}
