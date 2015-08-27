/*
Program Name : Maximizing XOR
Link         : https://www.hackerrank.com/challenges/maximizing-xor
Author Name  : Sayantan Pandit
Date         : 27-08-2015 
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
/*
 * Complete the function below.
 */
int maxXor(int l, int r) 
{
  int max = 0, res;
  for(int i=l; i<=r; i++)
  {
    for(int j=i; j<=r; j++)
    {
       res = i^j;
       if(res > max)
         max = res;
    }
  }
  return max;
}

int main() 
{
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
