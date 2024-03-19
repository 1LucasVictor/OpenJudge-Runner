#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i,x,sum,slen;
	char input[1024],num[2];
	while(1){
		sum=0;
		fgets(input,sizeof input,stdin);
		slen=strlen(input);
		//printf("slen=%d\n",slen);
		for(i=0;i<slen-1;i++){
			num[0]=input[i];
			//printf("%c\n",num[0]);
			sum+=atoi(num);
		}
		if(sum==0){
			break;
		}
		printf("%d\n",sum);
		
	}
	return 0;
}