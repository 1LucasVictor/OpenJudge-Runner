#include<stdio.h>
#include<string.h>
int main(void){
	char str[1001],tmp[1001],p[1001],command[10];
	int q,a,b,i,j;

	scanf("%s %d",str,&q);
	for(j=0;j<q;j++){
		scanf("%s %d %d",command,&a,&b);
		if(!strcmp(command,"print")){
			for(i=a;i<=b;i++) printf("%c",str[i]);
			printf("\n");
		}
		if(!strcmp(command,"reverse")){
			strcpy(tmp,str);
			for(i=a;i<=b;i++) str[i]=tmp[b-(i-a)];
		}
		if(!strcmp(command,"replace")){
			scanf("%s",p);
			for(i=a;i<=b;i++) str[i]=p[i-a];
		}
	}
	return 0;
}