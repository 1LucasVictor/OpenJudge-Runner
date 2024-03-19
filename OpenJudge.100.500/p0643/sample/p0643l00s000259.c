#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define llong long long
#define fr(i,l,r) for(i=(l);i<(r);i++)
#define min(p,q) ((p)<(q)?(p):(q))
#define max(p,q) ((p)>(q)?(p):(q))
#define INF 1000000000000//10^12


int main(void)
{
	//変数の宣言
	int a,b;
	
	//よく使う変数
	int i,j,k,l;
	int flag=0;
	int ans=0;
	int count=0;
	llong int temp,temp1,temp2;
	int max,min;
	int len;
	int sum=0;
	//データの読み込み
	scanf("%d %d",&a,&b);
	
	
//	printf("nは%dです\n", n);
//	printf("データの読み込み終了\n");
	//実際の処理
	
	
	
//	printf("計算部分終了\n");
	//出力
	
	if(a*b%2==0){
		printf("Even");
	}else{
		printf("Odd");
	}
	
	
	
//	printf("結果の出力終了\n");
	
	return 0;
	
}

