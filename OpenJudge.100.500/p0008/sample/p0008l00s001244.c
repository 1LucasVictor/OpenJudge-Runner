#include<stdio.h>
#include <stdbool.h>
#define MAX 999999

int main(void)
{
	int n;
	int i,j;
	int count;
	bool tmp[MAX]={};

	while(1){
		if((scanf("%d",&n))!=EOF){
			count=0;
			for(i=1;i<n;i++){
				tmp[i-1]=false;
			}
			
			for(i=2;i*i<=n;i++){
				if(tmp[i-1]==false){
					for(j=2;j<=n/i;j++){
						tmp[j*i-1]=true;
					}
				}
			}
			for(i=2;i<=n;i++){
				if(tmp[i-1]==false){
					count++;
//					printf("%d,",i);
				}
			}
			printf("%d\n",count);
		}
		else break;
	}
	return 0;
}