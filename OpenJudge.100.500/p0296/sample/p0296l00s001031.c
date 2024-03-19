#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){

	int stack[100];
	int i=0, tmp;
	char str[100];
	while(scanf("%s",str)!=EOF){
		if(str[0]=='+'){
			stack[i-2]+=stack[i-1];
			i--;
		}else if(str[0]=='-'){
			stack[i-2]-=stack[i-1];
			i--;
		}else if(str[0]=='*'){
			stack[i-2]*=stack[i-1];
			i--;
		}else{
			tmp=atoi(str);
			stack[i]=tmp;
			i++;
		}
	}
	printf("%d\n",stack[0]);
	return 0;
}