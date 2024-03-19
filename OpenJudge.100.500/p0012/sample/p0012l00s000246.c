#include <stdio.h>

int main(void)
{
	int a;
	int i;
	int num[100];
	int count = 0;
	
	
		
	while(scanf("%d", &a)!=EOF){
		
		if(a!=0){
			num[count] = a;
			count++;
		}else if(a==0){
			printf("%d\n", num[count-1]);
			count--;
		}
		
	}
	
	/* printf("Hello, world\n"); */
	return 0;
}