/*
Program Name : Time Conversion
Link         : https://www.hackerrank.com/challenges/time-conversion
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
  int hrs, mins, sec;
  char mode[2];
  
  scanf("%d:%d:%d%s", &hrs, &mins, &sec, mode);
  
  if(mode[0] == 'A')
  {
    if(hrs == 12)
      hrs = 0;
  }
  else
  {
     hrs += 12;
     if(hrs == 24)
        hrs = 12;
  }
  
  printf("%02d", hrs);
  printf(":%02d:%02d\n", mins, sec);  


  /*Another Method
  string str;
  cin >> str;
  int val = (str[0] - '0') * 10 + (str[1] - '0');
  if (str[8] == 'A') 
  {
    if (val == 12) 
       val = 0;
  }
  else 
  {
    val += 12;
    if (val == 24) 
      val = 12;
  } 
  printf("%02d", val);
  cout << str.substr(2, 6) << endl;*/
  return 0;
}
