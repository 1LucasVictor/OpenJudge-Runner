#include<stdio.h>

int main(void){
	  int A;
	  int B;
	  scanf("%d%d", &A, &B);
	  int count = 1;
	  int total = 0;
	  while(1){
		if(A == B)break;
	        total += 2 * A - 1;
	        if(total >= B){
			count++;
			break;
		}
		count++;
	  }
	  printf("%d\n",count);
	  return 0;
}
