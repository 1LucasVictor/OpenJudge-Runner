#include <stdio.h>

short Fin(short);

int main(){
  short n;

  scanf("%d",&n);

  printf("%d\n",Fin(n));

  return 0;
}

short Fin(short n){
  if(n == 0 || n == 1) return 1;

  return (Fin(n-1) + Fin(n-2));
}

