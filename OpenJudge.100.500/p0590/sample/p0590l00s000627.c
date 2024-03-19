#include<stdio.h>

int main(void)
{
	int hoge[5],k,i,j,sum,x;
	
	x = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%d",&hoge[i]);
	}
	
	scanf("%d",&k);
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			sum = hoge[j+1] - hoge[i];
			if(k < sum){
				x++;
			}
		}
	}
	
	if(x > 0){
		printf(":(\n");
	}
	
	else if(x == 0){
		printf("Yay!\n");
	}
	
	return 0;
}