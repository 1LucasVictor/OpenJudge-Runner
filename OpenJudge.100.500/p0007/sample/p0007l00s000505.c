#include<stdio.h>

int main(){
	//freopen("in/0008.txt","r",stdin);
	
	int n,i,j,k,l;
	int m[10][10][10][10];
	int r[36];
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
				for(l=0;l<10;l++){
					if(l==0) m[i][j][k][l]=i+j+k+l;
					else m[i][j][k][l]=m[i][j][k][l-1]+1;

					r[m[i][j][k][l]]+=1;
				}
			}
		}
	}

	while(scanf("%d",&n)!=EOF){
		printf("%d\n",r[n] );
	}

	return 0;
}