#include<stdio.h>
int main(void){
	setvbuf(stdout,NULL,_IONBF,0);

	int n,m,l,i,j,k;
	scanf("%d %d %d",&n,&m,&l);
	int num1[n][m];
	int num2[m][l];
	long int num3[n][l];

	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			num1[i][j] = 0;
		}
	}
	for(i = 0;i < m;i++){
		for(j = 0;j < l;j++){
			num2[i][j] = 0;
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < l;j++){
			num3[i][j] = 0;
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%d",&num1[i][j]);
		}
	}
	for(i = 0;i < m;i++){
		for(j = 0;j < l;j++){
			scanf("%d",&num2[i][j]);
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < l;j++){
			for(k = 0;k < m;k++){
				num3[i][j] += num1[i][k] * num2[k][j];
			}
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < l - 1;j++){
			printf("%d ",num3[i][j]);
		}
		printf("%d\n",num3[i][j]);
	}

	return 0;
}