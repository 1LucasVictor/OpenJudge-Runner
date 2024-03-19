#include<stdio.h>

main()
{
int N,c[4],ans=0,i,j,n,m;

while(scanf("%d",&N)!=EOF){
ans=0;
for(i=0;i<=9;i++){
	c[0]=i;
	for(j=0;j<=9;j++){
		c[1]=j;
		for(n=0;n<=9;n++){
			c[2]=n;
			for(m=0;m<=9;m++){
				c[3]=m;
				if(c[0]+c[1]+c[2]+c[3]==N){
					ans++;
				}
			}
		}
	}
}
printf("%d\n",ans);

}
return 0;

}