#include<stdio.h>
#include<ctype.h>
main(){
	char number[1001];
	int num,sum;
	int i;

	while(1){
		scanf("%s",number);
//		printf("%s\n",number);
		if(!(strcmp(number,"0"))) break;

		i = 0;
		sum = 0;
		while(number[i] != '\0'){
			num = number[i] - '0';
//			printf("%d\n",num);
			sum = sum + num;
			i++;
		}
		printf("%d\n",sum);
	}
	return 0;
}