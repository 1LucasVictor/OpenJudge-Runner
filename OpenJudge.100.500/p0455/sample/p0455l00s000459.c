#include<stdio.h>

int main(void)
{
  char a[2];
  int x;
  
  fgets(a,sizeof(a),stdin);
  sscanf(a,"%d",&x);
  
  printf("%d",x+x*x+x*x*x);
  
  return 0;
}