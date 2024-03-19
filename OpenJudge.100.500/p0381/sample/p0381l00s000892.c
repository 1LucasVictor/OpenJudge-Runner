#include<stdio.h>
int main(void){
	int n=0,x=0,count=0,i,j,k;
	while(1){
		scanf("%d %d",&n,&x);
		if(n==0&&x==0) break;
		for(i=1;i<=n-2;i++){
			for(j=i+1;j<=n-1;j++){
				for(k=j+1;k<=n;k++){
					if((i+j+k)==x){
						count++;
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}