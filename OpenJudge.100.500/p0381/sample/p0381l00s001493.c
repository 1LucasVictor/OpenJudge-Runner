#include<stdio.h>
int main()
{
int n,i,j,k,x,count=0;
	while(1){
		scanf("%d %d",&x,&n);
		if(n==0&&x==0){break;}
		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
				for(k=0;k<j;k++){
					if(i+j+k==x)
					{
						count++;
					}
	
				}
			}
		
		}
		printf("%d\n",count);
	}
}