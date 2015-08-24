/*
Program Name : Funny String
Link         : https://www.hackerrank.com/challenges/funny-string
Author Name  : Sayantan Pandit
Date         : 23-08-2015 
*/


#include <cmath>
#include <cstdio>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  char str[10000];
  char revStr[10000];
  int t, len, c, d;  
  scanf("%d", &t);
  
     
  while(t--)
  {
    int flag = 0;
    scanf("%s", str);
    len = strlen(str);
    
    for(c=len-1, d=0; c>=0; c--, d++)
         revStr[d] = str[c];
         
    for(int i=0; i<len-1; i++)
    {
       int left = str[i+1] - str[i];
       int right = revStr[i+1] - revStr[i];
       if(abs(left) != abs(right))
       {
         flag = 1;
         break;
       }           
    }
    if(flag == 0)
      printf("Funny\n");
    else
      printf("Not Funny\n");        
  } 
  return 0;
}
