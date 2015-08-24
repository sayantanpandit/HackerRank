/*
Program Name : Chocolate Feast
Link         : https://www.hackerrank.com/challenges/chocolate-feast
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
    int t,n,c,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> c >> m;
        int answer=0,temp;
        // Computer answer
        answer = n / c; 
        temp = answer;
        while(temp >= m)
        {
          temp = temp - m;
          answer++;
          temp++;
        }         
        cout<<answer<<endl;
    }
    return 0;
}
