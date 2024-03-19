#include <stdio.h>

int main(void)
{
	int stack[10]={0}, buf, crpos=0;
	while(scanf("%d", &buf) != EOF){
		if(buf == 0){
			crpos--;
			printf("%d\n", stack[crpos]);
		}else{
			stack[crpos] = buf;
			crpos++;
		}
	}
	return 0;
}