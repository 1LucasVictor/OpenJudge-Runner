#include <stdio.h>
 
int main(void) {
 
	int N;
	int A[20000];
	int result[20000];
 
 
	// 社員数を入力
	scanf("%d", &N);
 
	// resultを初期化
	for (int i = 1; i <= N; i++) {
		result[i] = 0;
	}
 
	// Aの値を配列に入力
	for (int i = 1; i < N; i++) {
		scanf("%d", &A[i]);
	}
  
  	for(int i = 1; i < N; i++){
      result[A[i]]++;
    }
 
 
	//　直属の部下の人数を改行区切りで出力
	for (int i = 1; i <= N; i++) {
		printf("%d\n", result[i]);
	}
 
	return 0;
}