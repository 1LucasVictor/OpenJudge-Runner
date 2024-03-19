#include<stdio.h>
#include<string.h>
#define N 200

int main(void){
	char mo[N],st[N],en[N];
	int m,h,i,j,maen=0;
	char last[]="-";
	
	while(1){
		scanf("%s",mo);
		if(strcmp(mo,last)==0)break;
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&h);
			for(j=0;j<h;j++){
				st[j]=mo[j];
				st[j+1]='\0';
			}
			maen=strlen(mo)-h;
			for(j=0;j<maen;j++){
				en[j]=mo[j+h];
				en[j+1]='\0';
			}
			strcpy(mo,en);
			strcat(mo,st);
		}
		printf("%s\n",mo);
	}
	
	return 0;
}
