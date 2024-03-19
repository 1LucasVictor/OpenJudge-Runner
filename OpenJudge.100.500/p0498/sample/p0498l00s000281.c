#include <stdio.h>
 
int main(void){
	int N;
  	scanf("%d",&N);
  	if(N % 2 == 1) N++;
  	printf("%d",N/2);
}