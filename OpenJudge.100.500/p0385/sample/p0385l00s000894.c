#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char adata;
	int idata,sum=0,len,i;
	while(1){
		scanf("%s",&adata);
		idata=atoi(&adata);
		if(idata==0) break;
		len=strlen(&adata);
		sum=0;
		for(i=1;i<=len;i++){
			sum+=(idata%10);
			idata=(idata/10);
		}
		printf("%d\n",sum);
	}
	return 0;
}