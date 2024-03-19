#include <stdio.h>

int main(){
  int a,b, maior=0;
  scanf("%d%d",&a,&b);
  if(a+b>maior)
    maior = a+b;
  if(a-b>maior)
    maior = a-b;
  if(a*b>maior)
    maior = a*b;
  printf("%d\n",maior);
  return 0;
}
