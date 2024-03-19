#include<stdio.h>
#include<string.h>

int main(void){
	char s[11],t[11];
	int n=0;
	do{
		scanf("%c",&s[n]);
		n++;
	}while(s[n-1]!='\n');
	for(int i;i<n;i++){
		scanf("%c",&t[i]);
		//printf("%c",t[i]);
	}
	for(int i=0;i<n-1;i++){
		//printf("%c,%c\n",s[i],t[i]);
		if(s[i]!=t[i]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}