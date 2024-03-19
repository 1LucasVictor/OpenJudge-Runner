#include<stdio.h>

int main (void){
  int a,b;
  double c;
  scanf("%d %d", &a, &b);
  c=((double)a+(double)b)/2;
  if((int)c==c ){
    printf("%d\n",(int)c);
  }
  else{
  printf("IMPOSSIBLE\n");
  }
  return 0;
}
