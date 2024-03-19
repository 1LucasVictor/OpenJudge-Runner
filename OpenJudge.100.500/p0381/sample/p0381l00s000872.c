#include<stdio.h>

main(){
	int n, x, count, i, j, k;
	
	while(1){
		scanf("%d%d",&n,&x);
		if(n==0&&x==0)break;
		
		count=0;
		
		for(i=1;i+2<=n;i++){
			for(j=i+1;j+1<=n;j++){
				for(k=j+1;k<=n;k++){
					if(i+j+k==x){
						if(i==j||i==k||j==k)count+=0;
						else count+=1;
					}
				}
			}
			
		}
		printf("%d\n",count);
		
	}
	return 0;
}