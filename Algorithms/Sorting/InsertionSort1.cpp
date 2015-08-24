/*
Program Name : Insertion Sort - Part 1
Link         : https://www.hackerrank.com/challenges/insertionsort1
Author Name  : Sayantan Pandit
Date         : 24-08-2015 
*/


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector <int> ar)
{
   for(int k=0; k<ar.size(); k++)
         cout << ar[k] << " ";
   cout << endl;         
}

void insertionSort(vector <int>  ar) 
{
  int temp;
  for(int i=0; i<ar.size()-1; i++)
  {
     if(ar[i] > ar[i+1])
     {
        temp = ar[i+1];
        for(int j=i; j>=0; j--)
        {
       //printf("temp : %d j:%d\n", temp,j);        
          if(ar[j] > temp)
          {
             ar[j+1] = ar[j];
             display(ar);
          }
          else
          {
             ar[j+1] = temp;
             display(ar);
             return;
          }                     
        }
        ar[0] = temp;
       display(ar);
     }
  }  
}


int main(void) 
{
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
   for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) 
   {
     int _ar_tmp;
     cin >> _ar_tmp;
     _ar.push_back(_ar_tmp); 
   }

   insertionSort(_ar);
   
   return 0;
}
