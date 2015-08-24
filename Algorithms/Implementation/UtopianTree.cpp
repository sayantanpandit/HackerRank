/*
Program Name : Utopian Tree
Link         : https://www.hackerrank.com/challenges/utopian-tree
Author Name  : Sayantan Pandit
Date         : 15-08-2015 
*/

#include <iostream>
using namespace std;

int height(int n) 
{
    int size = 1;
    if(n==0)
      return 1;
    else
    {
       for(int i=1; i<=n; i++)
       {
          if(i%2 != 0)
            size = size * 2;
          else
            size = size + 1;
       }
       return size;
    }
}

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
    return 0;
}
