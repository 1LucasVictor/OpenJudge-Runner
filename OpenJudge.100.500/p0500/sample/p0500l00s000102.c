#include <stdio.h>
#include <stdlib.h>

	int s[10],c[10];
	int cash[10];
int		main(void)
{
	int N,M;
	int i,j;
	int BB[12];
	scanf("%d%d",&N,&M);
	
	for(i=0;i<M;i++){
		scanf("%d%d",s+i,c+i);
		if(cash[s[i]]==0 || cash[s[i]]>=c[i]&&c[i]!=0){
			cash[s[i]]=c[i];
		}
	}
	
	if(cash[1]==0){
		printf("-1\n");
		return 0;
	}
	for(i=1;i<=N;i++){
		printf("%d",cash[i]);
	}
	
	printf("\n");
	return (0);
}
