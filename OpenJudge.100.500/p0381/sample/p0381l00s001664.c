#include<stdio.h>
int main(void){
	int n,x,i,j,k,l;
	
	while(1){
		i=0;
		scanf("%d %d",&n,&x);
		if(n==0&&x==0)break;
		for(j=3;j<=x-3;j++){
			for(k=2;k<j;k++){
				if(j+k>x)break;
				for(l=1;l<k;l++){
					if(j+k+l>x)break;
					if(j+k+l==x&&j<=n)i++;
				}
			}
		}
		printf("%d\n",i);
	}
	
	

	
	return 0;
}
