/*
Program Name : Solve me second
Link         : https://www.hackerrank.com/challenges/solve-me-second
Author Name  : Sayantan Pandit
Date         : 22-08-2015 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeSecond(int a, int b) {
  return a+b;
}

int main() {
  int num1, num2;
  int sum;
  int t;
  cin >> t;

  for (int i=0; i<t; i++) {
    cin >> num1 >> num2;
    sum = solveMeSecond(num1,num2);
    cout << sum << endl;
  }

  return 0;
}
