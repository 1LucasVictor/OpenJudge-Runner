#include<stdio.h>

int main(void){
    int n,x,i,j,k,t=0;
	scanf("%d %d",&n,&x);
	if(n>=3&&n<=100){
		for(i=1;i<n-2;i++){
			for(j=i+1;j<n-1;j++){
				for(k=i+2;k<=n;k++){
					if(i+j+k==x)t++;
				}
			}
		}
	}
		printf("%d\n",t);
	return 0;
}