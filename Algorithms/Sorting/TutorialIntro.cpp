/*
Program Name : Intro to Tutorial Challenges
Link         : https://www.hackerrank.com/challenges/tutorial-intro
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
   int v, n;
   scanf("%d %d", &v, &n);
   int arr[n];
   
   for(int i=0; i<n; i++)
      scanf("%d", &arr[i]);
      
   for(int i=0; i<n; i++)
   {
      if(arr[i] == v)
          printf("%d\n", i);
   }   
    
   return 0;
}
