/*
Program Name : Modified Kaprekar Numbers
Link         : https://www.hackerrank.com/challenges/kaprekar-numbers
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
  int p, q, flag = 0, digit = 0;
  scanf("%d %d", &p, &q);
    
  for(long i=p; i<=q; i++)
  {
     long temp=i, count = 0;     
     while(temp != 0)
     {
        temp = temp / 10;
        count++;
     }
     long p = (long)pow(10, count);
     long r = (i*i) % p;
     long l = (i*i) / p;
     
     if((r+l) == i)
     {
        printf("%ld ", i);
        flag++;
     }
  }
  
  if(flag == 0)
     printf("INVALID RANGE\n");
  else
     printf("\n");  
  return 0;
}
