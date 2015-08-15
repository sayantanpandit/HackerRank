#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int d1, m1, y1;
  int d2, m2, y2;
  
  scanf("%d %d %d", &d1, &m1, &y1);
  scanf("%d %d %d", &d2, &m2, &y2);  
  
  if(y1 > y2)
     printf("10000\n");
  else if((y1==y2) && (m1>m2))
      printf("%d\n", (m1-m2)*500);
  else if((m1==m2) && (d1>d2))
     printf("%d\n", (d1-d2)*15);
  else
     printf("0\n");

  return 0;
}
