#include<stdio.h>

int main(){
	int n,m,l;	//最初に入力される変数
	
	scanf("%d %d %d",&n,&m,&l);	//最初の入力
	
	int A[n][m];		//行列Aの定義
	int B[m][l];		//行列Bの定義
	long int C[n][l];	//行列Cの定義
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d",&A[i][j]);//行列Aに要素を格納
		}
	}
	
	for(int i = 0;i < m;i++){
		for(int j = 0;j < l;j++){
			scanf("%d",&B[i][j]);//行列Bに要素を格納
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < l;j++){
			C[i][j] = 0;//行列cの初期化
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			for(int k = 0;k < l;k++){
				C[i][k] += (long)A[i][j] * (long)B[j][k];
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < l;j++){
			printf("%ld",C[i][j]);//出力
			if(j != l - 1){
				printf(" ");
			}
		}
		printf("\n");//行毎に改行
	}
	
	return 0;
}

