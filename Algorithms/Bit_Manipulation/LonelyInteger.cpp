/*
Program Name : Lonely Integer
Link         : https://www.hackerrank.com/challenges/lonely-integer
Author Name  : Sayantan Pandit
Date         : 26-08-2015 
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
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int lonelyinteger(vector <int> a) 
{
  int result;
  if(a.size() == 0)
    return 0;
  else if(a.size() == 1)
    return a[0];
  else
  {
     result = a[0];
     for(int i=1; i<a.size(); i++)
        result = result ^ a[i];
  } 
  return result;
}

int main() 
{
    int res;    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) 
    {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
