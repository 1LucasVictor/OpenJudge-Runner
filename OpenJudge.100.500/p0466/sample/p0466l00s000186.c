#include<stdio.h>
#include<string.h>

int main(void){
	char s[10],t[11];
	int k=0,flag=0;

	scanf("%s",s);
	scanf("%s",t);

	while(s[k]!=0){
		if(s[k]!=t[k]){
			flag++;
		}
		k++;
	}

	if(flag==0){
		printf("Yes");
	}else{
		printf("No");
	}

	return 0;
}
