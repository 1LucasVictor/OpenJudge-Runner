#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){
	char input[1000];

	while(1){
		memset(input,0,sizeof(input));
		scanf("\n%[^\n]",input);
		if( (strlen(input)==1) && (input[0]-'0'==0) ){
			break;
		}
		int sum=0;
		for(int i=0;i<strlen(input);i++){
			sum+=input[i]-'0';
		}
		printf("%d\n",sum);
	}
	return 0;
}

