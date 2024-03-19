#include <stdio.h>

int main(void){
	int shu,i;
	int answer=100000;
	
	scanf("%d",&shu);
	for(i=0;i < shu;i++){
		answer = answer * 1.05;
		if(answer % 1000 > 0){
			answer = (answer/1000) * 1000 + 1000;
		}
	}
	printf("%d\n",answer);
	
	return 0;
}