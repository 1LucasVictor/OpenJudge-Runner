
#include <stdio.h>

int main(void)
{
	//変数の宣言
	int d,n;
	int ans;
	
	//データの読み込み
	scanf("%d %d",&d,&n);
	
//	printf("nは%dです\n", n);
//	printf("データの読み込み終了\n");
	
	
	//実際の処理
	
	if(d==0){
		ans=n;
	}else if(d==1){
		ans=n*100;
	}else{
		ans=n*10000;
	}
	
	
//	printf("計算部分終了\n");
	
	//出力
	
	printf("%d",ans);
	
//	printf("結果の出力終了\n");
	
	return 0;
}
