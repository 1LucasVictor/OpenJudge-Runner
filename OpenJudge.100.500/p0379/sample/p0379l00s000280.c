#include <stdio.h>
int main(void){

int c,d,e,n,m;
int a[101][101]={};
int b[101]={};
e=0;

scanf("%d %d",&n,&m);

//=====================
//printf("n=%d  m=%d\n",n,m);
//=====================

for(c=1;c<=n;c++){
	for(d=1;d<=m;d++){
	scanf("%d",&a[c][d]);
	
	//=================
	//printf("%d ",a[c][d]);
	//=================
	
	}
	
	//=================
	//printf("\n");
	//=================
	
}

/*//=====================
for(c=1;c<=n;c++){
	for(d=1;d<=m;d++){
	printf("%d ",a[c][d]);
	}
	printf("\n");
}
//=====================*/

for(d=1;d<=m;d++){
scanf("%d",&b[d]);
}

for(c=1;c<=n;c++){
	for(d=1;d<=100;d++){
	e=e+a[c][d]*b[d];
	
	//=============
	//printf("%d\n",e);
	//=============
	}
	printf("%d\n",e);
	e=0;
}

return 0;
}