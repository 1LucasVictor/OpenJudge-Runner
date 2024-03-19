#include<stdio.h>

void inverse(char str[],char inv[]);

int main(){
	char str[21],inv[21];
	while(scanf("%s",str)!=-1){
		inverse(str,inv);
		printf("%s\n",inv);
	}
	return 0;
}

void inverse(char str[],char inv[]){
	int i,j;
	for(i=0;str[i]!='\0';i++);
	for(j=0;j<i;j++){
		inv[j]=str[i-j-1];
	}
	inv[j]='\0';
}