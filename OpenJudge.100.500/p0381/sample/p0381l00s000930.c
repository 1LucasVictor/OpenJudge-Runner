#include<stdio.h>
int main()
{
int n,i,j,k,x,count=0;
	while(1){
		scanf("%d %d",&n,&x);
		if(n==0&&x==0){break;}
		for(i=1;i<n+1;i++){
			for(j=1;j<i;j++){
				for(k=1;k<j;k++){
					if(i+j+k==x)
					{
						count++;
					}
	
				}
			}
		
		}
		printf("%d\n",count);
	}
	return 0;
}