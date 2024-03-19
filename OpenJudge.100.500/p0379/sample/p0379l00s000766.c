#include<stdio.h>

int main(){
	int n,m;//最初に入力される変数
	
	scanf("%d %d",&n,&m);//最初の入力
	
	int A[n][m];//行列の定義
	int b[m];	//ベクトルの定義
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			scanf("%d",&A[i][j]);//行列に要素を格納
		}
	}
	
	for(int i = 0;i < m;i++){
		scanf("%d",&b[i]);//ベクトルに要素を格納
	}
	
	int c;//列ベクトル
	for(int i = 0;i < n;i++){
		int c = 0;//列ベクトル初期化
		for(int j = 0;j < m;j++){//ciを導出
			c += A[i][j] * b[j];
		}
		printf("%d\n",c);//出力
	}
	return 0;
}

