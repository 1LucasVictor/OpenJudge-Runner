#include <stdio.h>

int main()
{
	int stack[10];
	int train;
	int pointer=0;

	while(scanf("%d", &train)!=EOF){
		if(train==0){
			printf("%d\n", stack[pointer-1]);
			pointer--; continue;
		}
		stack[pointer]=train;
		pointer++;
	}
}