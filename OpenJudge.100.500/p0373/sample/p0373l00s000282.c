#include <stdio.h>

int main(void) {
  int a,b,c,d,e;
  for(e=1;;e++){
  scanf("%d %d",&b,&d);
  if(b==0&&d==0)break;
  for(a=1;a<=b;a++){
  for(c=1;c<=d;c++){
    if(a>1&&a<b&&c>1&&c<d)
    printf(".");
    else
    printf("#");
  }
  printf("\n");
  }
  printf("\n");
  }
  return 0;
}
