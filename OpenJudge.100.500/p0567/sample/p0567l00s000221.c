#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a<b+c)
    printf("%d\n",b+c-a);
  else
    printf("0\n");
  return 0;
}
