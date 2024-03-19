#include<stdio.h>
main()
{
	int i,j,n,del;
	
	while(scanf("%d",&n)!=EOF){
		
		int flag[n+1],cnt=0;
		
		for(i=0;i<=n;i++){
			flag[i]=1;
		}
		
		flag[0]=0;
		flag[1]=0;
		
		for(i=2;i<=n;i++){
			if(flag[i]==1){
				cnt+=1;
				for(j=1;i*j<=n;j++){
					flag[i*j]=0;
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}