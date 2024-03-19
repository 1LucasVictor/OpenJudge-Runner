#include <stdio.h>
int main(void)
{
  long n,d;
  int cnt=0;
  long x[250000],y[250000];
  scanf("%ld%ld", &n, &d);
    long D=d*d;
  for(int i=0;i<n;i++){
    scanf("%ld%ld", &x[i],&y[i]);
    if(D >= x[i]*x[i]+y[i]*y[i]){
      cnt++;
    }
  }
  printf("%d", cnt);
return 0;
}