#include <stdio.h>
int main(){
	int n,x;
	int i,j,k;
	int c;
	while(1){
		c=0;
		scanf("%d %d",&n,&x);
		if(!n&&!x)break;
		for(i=1;i<=n;i++){
			for(j=1;j<i;j++){
				for(k=1;k<j;k++){
					if(i+j+k==x)c++;
				}
			}
		}
		printf("%d\n",c);
	}
}