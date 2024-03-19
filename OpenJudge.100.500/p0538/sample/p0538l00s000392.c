#include<stdio.h>
int main(void){
  int n,m;
  scanf("%d%d",&n,&m);
  if(1<=n&&n<10&&1<=m&&m<10)
  printf("%d\n",n*m);
  else
  printf("-1\n");
  return 0;
}
