#include <stdio.h>

int main(void){
	int n,cnt=0,x[100];
	char str[100];

	for( ; ; ){
		fgets(str,sizeof(str),stdin);
		sscanf(str,"%d",&n);
		if(n==0){
			cnt--;
			if(cnt<0)
				return 0;
			printf("%d\n",x[cnt]);
		}
		else
			x[cnt++]=n;
	}
}