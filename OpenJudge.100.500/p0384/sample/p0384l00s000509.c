#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int change(char *a,char **b){
	int n=1200;
	int eret;
	*b=(char*)malloc(strlen(a)+1);
	if(fgets(a,n,stdin)){
		for(;*a;++a){
			if(*a>='a'&&*a<='z'){
				*a-='a'-'A';
			}
			else if(*a>='A'&&*a<='Z'){
				*a+='a'-'A';
			}
			*b=a;
			printf("%c",**b);
		}
		if(strlen(a)<n && a!=NULL && *b!=NULL){
			return 0;
		}
		else{
			eret=1;
			return (-1);
		}
	}
}

int main(){
	int n=1200;
	int eret;
	char *a=(char*)malloc(n+1);
	change(a,&a);
	if(eret==1){
		printf("over\n");
		return 1;
	}
	else{
		return 0;
	}
}