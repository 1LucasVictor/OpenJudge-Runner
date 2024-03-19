#include <stdio.h>

int main(void){
	char num[1000];
	int total=0,count=0,i;
	while(1){
		scanf("%s",num);
		if(num[0]=='0') break;
		while(num[count]!='\0'){
			count++;
		}
		for(i=0;i<count;i++){
			total+=num[i]-'0';
		}
		printf("%d\n",total);
		total=0;
		count=0;
	}
	return 0;
}