#include<stdio.h>
int main(void)
{
  int x;
  int point;
  int n, m;
  //500円　1000
  //5円　　5
  
  scanf("%d", &x);
  
  n = x%500;
  point = 1000 * (x - n) / 500;
  
  m = n%5;
  
  point = point + 5 * (n - m)/5;
  
  printf("%d\n", point);
  
  return 0;
}