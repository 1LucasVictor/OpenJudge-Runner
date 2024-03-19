#include<stdio.h>

int main(){

  int a,b,t,kaisu;


  scanf("%d %d %d",&a,&b,&t);

  kaisu = (t + 0.5) / a;

  printf("%d\n",kaisu*b);

  return 0;
}
