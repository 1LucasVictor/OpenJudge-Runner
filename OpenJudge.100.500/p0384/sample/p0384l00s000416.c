#include <stdio.h>
#include <stdlib.h>

int change(char *a){
	for(;*a;++a){
		if(*a>='a'&&*a<='z'){
			*a-='a'-'A';
		}
		else if(*a>='A'&&*a<='Z'){
			*a+='a'-'A';
		}
	}
}

int main(){
	int n=1500;
	char* const a=(char*)malloc(n);
	if(a){
		if(fgets(a,n,stdin)){
			change(a);
			fputs(a,stdout);
		}
	}
	free(a);
	return 0;
}