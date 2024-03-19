#include <stdio.h> 
 
int main(void)
{
    int n,x,cnt,i,j,k,sum;
	
	while(1){
		scanf("%d %d",&n,&x);
		if(n==0 && x==0){
			break;
		}
		cnt=0;
		for(i=1;i<=n-2;i++){
			sum=i;
			for(j=i+1;j<=n-1;j++){
				sum+=j;
				for(k=j+1;k<=n;k++){
					sum+=k;
					if(sum==x){
						cnt++;
					}
					sum-=k;
				}
				sum-=j;
			}
		}
		printf("%d\n",cnt);
	}
	
    return 0;
}