#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(){
	int n,m,l;
	int i,j,k;
	int a[100][100],b[100][100],c[100][100];
	int p;
	
	//??\???
	//n m l
	do{
		printf("");
		scanf("%d %d %d",&n,&m,&l);
	}while(!(n>=1 && n<=100 && m>=1 && m<=100 && l>=1 && l<=100));
	//a[n][m]
	for(i=0;i<n;i++){
		printf("");
		do{
			p=TRUE;
			for(j=0;j<m;j++){
				scanf("%d",&a[i][j]);
				if(!(a[i][j]>=0 && a[i][j]<=10000))p=FALSE;
			}
		}while(p==FALSE);	
	}
	//b[m][l]
	for(i=0;i<m;i++){
		printf("");
		do{
			p=TRUE;
			for(j=0;j<l;j++){
				scanf("%d",&b[i][j]);
				if(!(b[i][j]>=0 && b[i][j]<=10000))p=FALSE;
			}
		}while(p==FALSE);
	}
	
	//??????
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			c[i][j]=0;
			for(k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	//??????
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			if(j!=l-1){
				printf("%d ",c[i][j]);
			}else{
				printf("%d\n",c[i][j]);
			}
		}
	}
	
	
	
	return 0;
}