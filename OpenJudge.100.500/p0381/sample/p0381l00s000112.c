#include <stdio.h>

int main(void)
{
	/*?????°??£?¨?*/
	int i,j,k,c,n,x;
	
	/*??????*/
	while(!(n==0&&x==0)){
		scanf("%d %d",&n,&x);
		c=0;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				for(k=1;k<=n;k++){
					if(i!=j&&j!=k&&k!=i){
						if(i+j+k==x){
							c++;
						}
					}
				}
			}
		}
		if(n==0&&x==0) break;
		printf("%d\n",c/6);
	}
	
	return 0;
}