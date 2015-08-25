/*
Program Name : Insertion Sort - Part 2
Link         : https://www.hackerrank.com/challenges/insertionsort2
Author Name  : Sayantan Pandit
Date         : 25-08-2015 
*/

#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

void display(int ar_size, int *ar)
{ 
   for(int i=0; i<ar_size; i++)
     cout << ar[i] << " ";
   cout << endl;
}

void insertionSort(int ar_size, int *ar) 
{
   for(int i=1; i<=ar_size-1; i++)
   {
      int pos = i, temp;
      while(pos > 0 && ar[pos-1] > ar[pos])
      {
         temp      = ar[pos];
         ar[pos]   = ar[pos-1];
         ar[pos-1] = temp; 
         pos--;         
      }
      display(ar_size, ar);
   }   
}

int main(void) 
{   
    int _ar_size;
    cin >> _ar_size;
 
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
        cin >> _ar[_ar_i];        

   insertionSort(_ar_size, _ar);
   
   return 0;
}
