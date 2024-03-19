#include<stdio.h>
#include<string.h>
int main(){
	char s[256],tmp[256];
	int n,h,i,j;
	while(1){
		scanf("%s",s);
		if(!strcmp(s,"-"))break;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&h);
			for(j=0;j<h;j++)tmp[j]=s[j];
			for(j=0;j<strlen(s)-h;j++)s[j]=s[j+h];
			for(j=0;j<h;j++)s[strlen(s)-h+j]=tmp[j];
		}
		printf("%s\n",s);
	}
	return 0;
}