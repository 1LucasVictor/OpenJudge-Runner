#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1001]={0,},tmp[1001]={0,},com[10]={0,},p[1024]={0,};
	int i,j,a,b,q;
	scanf("%s", &str);
	scanf("%d", &q);
	for(i=0;i<q;i++){
		scanf("%s %d %d", &com,&a,&b);
		if(strcmp(com,"print")==0){
			for(j=0;j<=b-a;j++) printf("%c",str[j+a]);
			printf("\n");
		}
		else if(strcmp(com,"reverse")==0){
			strcpy(tmp,str);
			for(j=0;j<=b-a;j++) str[j+a]=tmp[b-j];
		}
		else if(strcmp(com,"replace")==0){
			scanf("%s",&p);
			for(j=0;j<=b-a;j++) str[j+a]=p[j];
		}
		fflush(stdin);
	}
	return 0;   
}