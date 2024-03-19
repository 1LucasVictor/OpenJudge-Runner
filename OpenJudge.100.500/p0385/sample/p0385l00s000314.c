#include <stdio.h>

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);

	char num[1001] = {};
	int i,sum;

	while(1){
		scanf("%s",num);
		if(num[0] == '0'){
			break;
		}
		else{
			sum = 0;
			for(i = 0;i < 1001;i++){
				if(num[i] == NULL){
					break;
				}
				else{
					sum += (num[i] - '0');
				}
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}