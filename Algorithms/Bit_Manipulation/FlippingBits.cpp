/*
Program Name : Flipping bits
Link         : https://www.hackerrank.com/challenges/flipping-bits
Author Name  : Sayantan Pandit
Date         : 27-08-2015 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    unsigned int n;
    scanf("%d", &t);
    
    while(t--)
    {
       scanf("%u", &n);
       printf("%u\n", ~n); 
    }
    return 0;
}
