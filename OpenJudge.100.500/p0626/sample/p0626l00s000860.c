#include<stdio.h>
int main(void){
  int n,d;
  scanf("%d %d",&n,&d);
  switch (n) {
    case 0: printf("%d",d); break;
    case 1: printf("%d",d*100); break;
    case 2: printf("%d",d*10000); break;
  }
  return 0;
}
