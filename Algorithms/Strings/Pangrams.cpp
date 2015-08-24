/*
Program Name : Pangrams
Link         : https://www.hackerrank.com/challenges/pangrams
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
    char s[1000];
    gets(s);
    int arr[26] = {0};

    for(int i=0; s[i]!='\0'; i++)
    {
        char temp = toupper(s[i]);
        int a = temp - 'A';
  
        if(a>=0 && a<=25)        
          arr[a] = arr[a] + 1;          
    }
    
    int count = 0;
    for(int i=0; i<26; i++)
    {
       if(arr[i] <= 0)
       {
         count++;
         break;
       }
    }
    
    if(count == 0)
      printf("pangram\n");
    else
      printf("not pangram\n");

    return 0;
}
