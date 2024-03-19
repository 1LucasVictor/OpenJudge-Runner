#include<stdio.h>
int main()
{
	int n,i,j,count,prim;
	while(scanf("%d",&n)!=EOF){
		prim=0;
		for(i=2;i<=n;i++){
			count=0;
			for(j=2;j<=i;j++){
				if(i%j==0){
					count++;
				}
			}
			if(count==1){
					prim++;
					}
		}
		printf("%d\n",prim);
	}
	return 0;
}