#include<stdio.h>
int main(){
	int n,x,i,j,k,num;
	while(1){
		scanf("%d %d",&n,&x);
		if(n==x && n==0) break;
		num=0;
		for(i=1;i<=n-2;i++){
			for(j=i+1;j<=n-1;j++){
				for(k=j+1;k<=n;k++){
					if(i+j+k==x){
						num++;
					}
				}
			}
		}
		printf("%d\n",num);
	}
}
