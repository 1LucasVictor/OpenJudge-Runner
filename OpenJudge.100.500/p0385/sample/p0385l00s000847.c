#include <stdio.h>
int main(void){
	
	while(1){
		int a,i;
		char num[1010];
		scanf("%s",&num);
		if(num[0]=='0') break;
		else{
			int sum=0;
			for(i=0;i<strlen(num);i++){
				sum+=num[i]-'0';
			}
			printf("%d\n",sum);
		}
		
	}
	return 0;
}

