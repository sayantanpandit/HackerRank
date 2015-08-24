/*
Program Name : The Time in Words
Link         : https://www.hackerrank.com/challenges/the-time-in-words
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
  int h, m;
  cin >> h >> m;
  char mins[30][20]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
  
  if(m == 0)
     cout << mins[h-1] << " o' clock" << endl;
  else if(m == 15)
     cout << "quarter past " << mins[h-1] << endl;     
  else if(m == 30)
     cout << "half past " << mins[h-1] << endl;
  else if(m == 45)
     cout << "quarter to " << mins[h] << endl;
  else if(m <= 29)
  {
     if(m == 1)
         cout << mins[m-1] << " minute past " << mins[h-1] << endl;        
     else
         cout << mins[m-1] << " minutes past " << mins[h-1] << endl;        
  }
  else if(m >= 31)    
  {
      if(m == 59)
         cout << mins[59-m]  << " minute to "  << mins[h] << endl;        
     else
         cout << mins[59-m]  << " minutes to " << mins[h] << endl;        
  }
}
