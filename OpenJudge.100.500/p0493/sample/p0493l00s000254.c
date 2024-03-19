#include<stdio.h>
#include<assert.h>
int main() { 
  int x;
  assert(scanf("%d",&x) == 1);
  int c500 = x/500, r500 = x%500, c5 = r500/5; 
  printf("%d\n",c500*1000+c5*5); }