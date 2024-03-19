#include <stdio.h>
int main(void){

int c,d,e,f;
int n,m,l,i,j,k;
int a[101][101]={};
int b[101][101]={};
long g[101][101]={};

scanf("%d %d %d",&n,&m,&l);

for(c=1;c<=n;c++){
	for(d=1;d<=m;d++){
	scanf("%d",&e);
	a[c][d]=e;
	//printf("*%d",a[c][d]);
	}
}

for(c=1;c<=m;c++){
	for(d=1;d<=l;d++){
	scanf("%d",&e);
	b[c][d]=e;
	//printf("*%d",b[c][d]);
	}
}
/*////////////////////////////////////////
for(c=1;c<=n;c++){
	for(d=1;d<=m;d++){
	printf("a[%d][%d]=%d\n",c,d,a[c][d]);
	}
}
for(c=1;c<=m;c++){
	for(d=1;d<=l;d++){
	printf("b[%d][%d]=%d\n",c,d,b[c][d]);
	}
}
///////////////////////////////////////*/
for(k=1;k<=n;k++){
	for(j=1;j<=l;j++){
		for(i=1;i<=m;i++){
		g[k][j]+=a[k][i]*b[i][j];
		}
	}
}

for(c=1;c<=n;c++){
	for(d=1;d<=l;d++){
	printf("%ld",g[c][d]);
	if(d<l){printf(" ");}
	}
	printf("\n");
}

return 0;
}