#include <stdio.h>

int main(void){
  int a=0;
  scanf("%d",&a);
  if(a==0 || a==1){
    printf("1\n");
    return 0;
  }
  int i=0;
  int m=1;
  int n=1;
  int ch=0;
  for(i=0;i<a-1;i++){
    n+=m;
    ch=m;
    m=n;
    n=ch;
  }
  printf("%d\n",m);
  return 0;
}