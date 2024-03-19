/*

aとbの最小公倍数、最大公約数を求めよ。
aとbは20億以下とする。
ただし、公倍数も20億以下とする。

やり方：
	・aとbを入力。
	・最小公倍数を求める関数koubai00と、最大公約数を求める関数kouyaku00を使い、
		配列2つ（koubai[]とkouyaku[]）にそれぞれ記録していく。
	・表示して終わり。

結果：Run time error

何がおかしいのだろう。
普通に実行できるのだが。

*/
#include <stdio.h>

int koubai00(int a, int b);		//最小公倍数を求める関数。詳細は下部。
int kouyaku00(int a, int b);		//最大公約数を求める関数。ユークリッドさんの互除法。

int main()
{
	int a[10],b[10];
	int i=0,count;
	int koubai[10],kouyaku[10];
	int ret;
	while(1){
		ret=scanf("%d %d",&a[i], &b[i]);
		if(ret==EOF){
			break;
		}
		if(a[i]<=2000000000&&b[i]<=2000000000){
			i++;
		}
	}
	count=i;
	for(i=0; i<count; i++){
		koubai[i]=koubai00(a[i], b[i]);
		kouyaku[i]=kouyaku00(a[i], b[i]);
	}
	for(i=0; i<count; i++){
		printf("%d %d\n",kouyaku[i], koubai[i]);
	}
    return 0;
}

int koubai00(int a, int b)				//最小公倍数を求める関数。
{										//A*B=最大公約数*最小公倍数		らしい。
	int small,big;
	if(a<b){
		small=a;
		big=b;
	}
	else if(a>b){
		small=b;
		big=a;
	}
	else{
		return a;
	}
	int r;
	int result;
	while(small!=0){
		r=big%small;
		big=small;
		small=r;
	}
	result=(a/big)*b;
	return result;
}

int kouyaku00(int a, int b)				//最大公約数を求める関数。ユークリッドさんの互除法。
{
	int r;
	int small,big;
	if(a<b){
		small=a;
		big=b;
	}
	else if(a>b){
		small=b;
		big=a;
	}
	else{
		return a;
	}
	while(small!=0){
		r=big%small;
		big=small;
		small=r;
	}
	return big;
}