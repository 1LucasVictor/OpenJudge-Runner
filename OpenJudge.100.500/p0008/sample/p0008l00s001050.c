#include<stdio.h>
#define F(a,b) for(a=2;a<=b;a++)
main(){int i,j,n,p[1000000];while(scanf("%d",&n)!=EOF){F(i,n)p[i]=1;F(i,n)F(j,n/i)p[i*j]=0;j=0;F(i,n)j+=p[i];printf("%d\n",j);}}