#include<stdio.h>
#include<assert.h>
int main() { 
  int x; assert(scanf("%d",&x) == 1), printf("%d\n",(x/500)*1000+((x%500)/5)*5); }