#include<stdio.h>
#include<string.h>
int main(){
	int a,b,c,i,j;
	char ase[1001],str[1001],sr[1001],p[1001];
	scanf("%s %d",str,&c);
	for(i=0;i<c;i++){
		scanf("%s %d %d",sr,&a,&b);
		if(strstr(sr,"print")!=NULL){
			for(j=a;j<=b;j++)printf("%c",str[j]);
			printf("\n");
		}
		else if(strstr(sr,"replace")!=NULL){
			scanf("%s",p);
			for(j=a;j<=b;j++)str[j]=p[j-a];
		}
		else if(strstr(sr,"reverse")!=NULL){
			strcpy(ase,str);
			for(j=a;j<=b;j++)str[j]=ase[b-(j-a)];
		}
	}
	return 0;
}

