/*
Program Name : Staircase
Link         : https://www.hackerrank.com/challenges/staircase
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
  int n;
  scanf("%d", &n);
  
  for(int i = n; i>0; i--)
  {
    for(int j=i-1; j>0; j--)
      printf(" ");
      
    for(int k=0; k<=(n-i); k++)
      printf("#"); 
    printf("\n");       
  }
  return 0;
}
