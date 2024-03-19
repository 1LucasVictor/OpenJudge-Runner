#include <stdio.h>
#include <string.h>
int main(){
	char num[1001];
	int len,x,m,sum,n,i;
	for(;;){
		sum=0;
		scanf("%s",num);
		len=strlen(num);
		if(strcmp(num,"0")==0)break;
		for(i=0;i<len;i++){
			sum+=(int)num[i]-48;
		}
		printf("%d\n",sum);
	}
	return 0;
}
