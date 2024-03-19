#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int sum=0,i,slen;
	char input[1002],c[2];
	
	while(1){
		fgets(input,sizeof input,stdin);
		
		slen=strlen(input);
		
		for(i=0;i<slen;i++){
			c[0]=input[i];
			sum+=atoi(c);
			
		}
		
		if(sum==0){
			break;
		}
		printf("%d\n",sum);
		sum=0;
	}
	
	return 0;
}