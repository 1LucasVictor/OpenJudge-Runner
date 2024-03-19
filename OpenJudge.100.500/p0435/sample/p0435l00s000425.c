#include <stdio.h>

int main(void) {
  int n,d,count=0;
  scanf("%d %d",&n,&d);
  int x[n],y[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d %d",&x[i],&y[i]);
    long long int c=x[i]*x[i] + y[i]*y[i];
    long long int g=d*d;
    if(c<=g)
    count++;
  }
  printf("%d\n",count);
  return 0;
}