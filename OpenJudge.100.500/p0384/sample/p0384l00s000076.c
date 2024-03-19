#include<stdio.h>
int main(void){
	char ch[1200];
	int i=0;

	while(1){
		scanf("%c",&ch[i]);
		if(ch[i]=='\n'){
			break;
		}
		if('a'<= ch[i] && ch[i] <= 'z'){
			ch[i]=ch[i]-32;
		}else if('A' <= ch[i] && ch[i] <= 'Z'){
			ch[i]=ch[i]+32;
		}
		i++;
	}
	i=0;
	while(1){
		if(ch[i]=='\n'){
			break;
		}
		printf("%c",ch[i]);
		i++;
	}
	printf("\n");
	return 0;
}
