#include <stdio.h>
#define N_MAX 10

int main(void){
	int stack[N_MAX], sp=0, t;
	while(scanf("%d",&t)==1){
		if(t==0) printf("%d\n",stack[--sp]);
		else stack[sp++]=t;
	}
	return 0;
}