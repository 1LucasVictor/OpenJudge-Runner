#include<stdio.h>
int main(void){
	int n,i,a[100];
	scanf("%d",&n);//回数を入力
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);//配列に値を入力
	}
	for(i=n-1;i>=0;i--){//回数-１から０になるまで
		printf("%d",a[i]);//配列を出力
		if(i!=0){//もし０じゃないならば
			printf(" ");//空白を開ける
		}
	}
	printf("\n");
	return 0;
}
