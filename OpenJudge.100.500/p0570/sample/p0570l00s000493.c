#include <stdio.h>

int main(void) {
  int a,b;
  scanf("%d%d",&a,&b);
  double m=((double)a+(double)b)/2;

  if(m-(int)m==0){
  printf("%d",(int)m);
  }

  else{
    printf("impossible");

  }






  return 0;
}