#include <stdio.h>

int sum(char x[]){
	int i,sum=0;

	for(i = 0;x[i]!='\0';i++){
		sum+=x[i] - 48;
	}
	return sum;
}

int main(void){
	int i;
	while(1){
		char a[5]={0};
		scanf("%s",&a);
		if(sum(a) == 0) break;
		
		printf("%d\n",sum(a));
	}

	return 0;
		
}