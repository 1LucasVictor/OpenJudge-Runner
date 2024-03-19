#include <stdio.h>
#include <stdlib.h>

#define NUM 1000000000

int main(void){
	int a,b,flag=0;
	scanf("%d %d",&a,&b);
	
	for (int k = 1; k <= NUM; ++k){
		if(abs(a-k) == abs(b-k)){
			printf("%d\n",k);
			flag=1;
			break;
		}else{
			flag=0;
		}
	}
	if (flag == 0){
		printf("IMPOSSIBLE\n");
	}
	
	return 0;
}