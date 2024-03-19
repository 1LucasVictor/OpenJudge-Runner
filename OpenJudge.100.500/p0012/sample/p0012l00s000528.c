#include <stdio.h>

int main()
{
	int n,senro[10],i;
	
	for(i=0;i<10;i++)
		senro[i]=0;
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0){
			for(i=9;i>=0;i--){
				if(senro[i]!=0){
					printf("%d\n",senro[i]);
					senro[i]=0;
					break;
				}
			}
		}else{
			for(i=0;i<10;i++){
				if(senro[i]==0){
					senro[i]=n;
					break;
				}
			}
		}
	}
	
	return 0;
}