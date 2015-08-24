/*
Program Name : Caesar Cipher
Link         : https://www.hackerrank.com/challenges/caesar-cipher-1
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
   int n,k;
   char s[100];
   scanf("%d", &n);
   scanf("%s", s);
   scanf("%d", &k);   
   
   for(int i=0; i<n; i++)
   {
      if(s[i] >= 'A' && s[i] <= 'Z')
        printf("%c", (s[i] + k - 'A') % 26 + 'A');
      else if(s[i] >= 'a' && s[i] <= 'z')
        printf("%c", (s[i] + k - 'a') % 26 + 'a');
      else
        printf("%c", s[i]);    
   }
   printf("\n");
}
