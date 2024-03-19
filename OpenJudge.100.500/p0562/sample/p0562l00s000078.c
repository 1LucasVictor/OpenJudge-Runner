#include<stdio.h>

int main(void){
	  int A;
	  int B;
	  scanf("%d%d", &A, &B);
	  int count = 0;
	  int total = 1;
	  while(1){
		total -= 1;
	        total += A;
		count++;
	        if(total >= B) break;
		
	  }
	  printf("%d\n",count);
	  return 0;
}
