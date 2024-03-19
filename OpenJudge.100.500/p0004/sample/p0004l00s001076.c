#include <stdio.h>
int main(void) {
  int a, b, i;
  while(scanf("%d",&a) != EOF) {
    scanf("%d",&b);
    for(i = (a<b ? a:b); i > 0; i--) {
      if(a % i == 0 && b % i == 0 ) {
	printf("%d ",i);
	break;
      }
    }
    for(i = (a>b ? a:b); i > 0; i++) {
      if(i % a == 0 && i % b == 0 ) {
	printf("%d\n",i);
	break;
      }
    }
  }
  return(0);
}