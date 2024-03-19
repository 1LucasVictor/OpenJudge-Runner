#include <stdio.h>
int main(){
  int i,a,b,s,div;

  scanf("%d%d",&a,&b);

  if(a>b==1) s=b;
  else s=a;

  for(i=1;i<=s;i++){
    if(a%i==0&&b%i==0)
      div=i;
  }

  printf("%d\n",div);

  return 0;
}