#include<stdio.h>

int A[1000][1000],b[1000],c[1000];

void reset(){
	int a;
	for(a=0;a<1000;a++){
		c[a]=0;
	}
}

main(void)
{
	reset();
	
	int n,m,c1,c2,i;
	
	scanf("%d %d",&n,&m);
	
	for(c1=0;c1<n;c1++){
		for(c2=0;c2<m;c2++){
			scanf("%d ",&A[c1][c2]);
		}
	}
	
	for(c1=0;c1<m;c1++){
		scanf("%d ",&b[c1]);
	}
	
	for(i=0;i<n;i++){
		for(c1=0;c1<m;c1++){
			c[i]+=A[i][c1]*b[c1];
		}
	}
	
	for(c1=0;c1<n;c1++){
		printf("%d\n",c[c1]);
	}
	
}