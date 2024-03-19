#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void calc(char s[],char out[],int n,int h){

	for(int i=h;i<n;i++){
		out[i]=s[i];
		printf("%c",out[i]);
	}
	for(int i=0;i<h;i++){
		out[i]=s[i];
		printf("%c",out[i]);
	}
	printf("\n");
}

int main(void){
	char s[200],out[200]={};
	int m;
	int h,h2,s_len;

	while(scanf("%s",s)){
		if(strcmp(s,"-")==0){
			break;
		}

		strcpy(out,"");

		s_len = strlen(s);		

		scanf("%d",&m);
		h2=0;
		for(int i=0;i<m;i++){
			scanf("%d",&h);
			h2+=h;
		}

		calc(s,out,s_len,(h2%s_len));
	}

}
