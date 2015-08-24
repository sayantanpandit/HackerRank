/*
Program Name : Simple Array Sum
Link         : https://www.hackerrank.com/challenges/simple-array-sum
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
   cin >> n;
   int arr[n];
   int sum = 0;
   
   for(int i=0; i<n; i++)
   {
     scanf("%d", &arr[i]);
     sum = sum + arr[i];
   }
   cout << sum << endl;
   return 0;
}
