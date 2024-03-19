#include <stdio.h>


int main(void)
{
	int stack[100]={0}, stack_outed[100]={0}, crpos=0, out=0, buf;

	while( scanf("%d", &buf) != EOF){
		if(buf == 0){
			stack_outed[out++] = stack[--crpos];
		}else{
			stack[crpos++] = buf;
		}
	}

	for(buf=0; buf<10; buf++){
		if(stack_outed[buf] > 0){
			printf("%d\n", stack_outed[buf]);
		}else{
			break;
		}
	}
	return 0;
}