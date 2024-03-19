#include <stdio.h>
int main(void) {
	int A,B,C,D;
  	scanf("%d %d %d",&A,&B,&C);
  	D = C-(A-B);
  	if (D>0) {
		printf("%d\n",D);
    } else {
		printf("0\n");
    }
  return 0;
}