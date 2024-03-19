#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num[100];
	char s[2];
	int count=0;

	while(scanf("%s",s)!=EOF){
		if(s[0]=='+'){
			num[count-2]=(num[count-2]+num[count-1]);
			count--;
		}else if(s[0]=='-'){
			num[count-2]=(num[count-2]-num[count-1]);
			count--;
		}else if(s[0]=='*'){
			num[count-2]=(num[count-2]*num[count-1]);
			count--;
		}else{
			num[count++]=atoi(s);
		}/*
		for(int i=0;i<count;i++){
			printf("%d ",num[i]);
		}printf("\n");*/
	}
	
	printf("%d\n",num[0]);

	return 0;
}
