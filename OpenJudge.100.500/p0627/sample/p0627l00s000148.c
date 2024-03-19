#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  int i,c[3],max;
  c[0]=a+b;
  c[1]=a-b;
  c[2]=a*b;
  max=c[0];
  for(i=0;i<=2;i++)if(c[i]>=max)max=c[i];
  printf("%d\n",max);
  return 0;
}
