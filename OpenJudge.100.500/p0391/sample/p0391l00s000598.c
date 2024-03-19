#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[1001]={0,},str1[1001]={0,},com[10]={0,},p[101]={0,};
	int i,j,q,a,b;

	scanf("%s", &str);
	scanf("%d", &q);
	for(i=0;i<q;i++){
		scanf("%s", &com);
		if(strcmp(com,"print")==0){
			scanf("%d %d",&a,&b);
			for(j=0;j<=b-a;j++) printf("%c",str[j+a]);
			printf("\n");
		}
		else if(strcmp(com,"reverse")==0){
			scanf("%d %d",&a,&b);
			for(j=0;j<=b-a;j++) str1[j]=str[a+j];
			for(j=0;j<=b-a;j++) str[j+a]=str1[b-a-j];
		}
		else if(strcmp(com,"replace")==0){
			scanf("%d %d %s",&a,&b,&p);
			for(j=0;j<=b-a;j++) str[j+a]=p[j];
		}
	}
	return 0;   
}