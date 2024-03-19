#include <stdio.h>
#define M 100
int main(void)
{
	int n,m,l;
	
	long long a[M][M],b[M][M];
	long long ans[M][M];
	
	int i,j,k;
	
	scanf("%d %d %d",&n,&m,&l);
	
	for(i=0 ; i<n ; i++){	//aの入力
		for(j=0 ; j<m ; j++)
			scanf("%ld",&a[i][j]);
	}
	for(i=0 ; i<m ; i++){	//bの入力
		for(j=0 ; j<l ; j++)
			scanf("%ld",&b[i][j]);
	}
	
	for(i=0 ; i<n ; i++){	//n
		for(j=0 ; j<l ; j++){	//l
			for(k=0 ; k<m ; k++){	//m
				ans[i][j]+=a[i][k]*b[k][j];
			}//m
		}//l
	}//n

	for(i=0 ; i<n ; i++){
		for(j=0 ; j<l ; j++){
			if(j!=l)printf("%ld",ans[i][j]);
			if(j!=l-1)printf(" ");
		}
		printf("\n");
	}

	return 0;
}
