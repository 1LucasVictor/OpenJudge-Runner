#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char x[1001],c[2];
	int len,i,sum=0;
	while(1){
		scanf("%s",x);
		if(x[0]=='0'){
			break;
		}
		len=strlen(x);
		for(i=0;i<len;i++){
			c[0]=x[i];
			sum+=atoi(c);
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}