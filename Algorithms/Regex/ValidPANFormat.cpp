/*
Program Name : Valid PAN format
Link         : https://www.hackerrank.com/challenges/valid-pan-format
Author Name  : Sayantan Pandit
Date         : 25-09-2015 
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
   int n, flag;
   char str[100];
   scanf("%d", &n);
   
   while(n--)
   {
      flag = 0;
      scanf("%s", str);
      if(strlen(str) != 10)
          printf("NO\n");
      else
      {
         for(int i=0; i<10; i++)
         {
            if(i>=0 && i<=4)
            {
               if(str[i] >= 65 && str[i] <= 90)
                   flag += 1;
            }
            else if(i>=5 && i<=8)
            { 
               if(str[i] >= 48 && str[i] <= 57)
                   flag += 1;
            }
            else if(i==9)
            {
               if(str[i] >= 65 && str[i] <= 90)
                   flag += 1;              
            }            
         }
         if(flag == 10)
            printf("YES\n");
         else
            printf("NO\n");
      }      
   }  
   return 0;
}
