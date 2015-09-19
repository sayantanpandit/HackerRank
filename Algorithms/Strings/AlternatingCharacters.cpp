/*
Program Name : Alternating Characters
Link         : https://www.hackerrank.com/challenges/alternating-characters
Author Name  : Sayantan Pandit
Date         : 19-09-2015 
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
    int t, len, del;
    char str[100000];
    scanf("%d", &t);
    
    while(t--)
    {
       scanf("%s", str);       
       del = 0;
       for(int i=0; i<strlen(str); i++)
       {
          if(str[i] == str[i+1])
             del += 1;
       }
       printf("%d\n", del);
    }  
    return 0;
}
