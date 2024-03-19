#include<stdio.h>

int main(void){
	  int A;
	  int B;
	  scanf("%d%d", &A, &B);
	  int count = 1;
	  int total = A;
	  while(1){
		if(A == B){
			count = 1;
			break;
		}
	        total += A - 1;
		count++;
	        if(total >= B) break;
		
	  }
	  printf("%d\n",count);
	  return 0;
}
