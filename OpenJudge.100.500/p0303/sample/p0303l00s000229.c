#include <stdio.h>
#include <string.h>

#define MAX 100000

typedef long long llong; //long long型と同じ意味を持つllog型を定義

/*入力値を入れるための変数*/
int n; //荷物の個数
int k; //トラックの台数
llong T[MAX]; //各荷物の重さ, w_(0)からw_(n-1)までが入っている

/*積むことができる荷物の個数を求める関数
最大積載量P, トラックの台数k*/
int Check(llong P){
	int i = 0; //荷物の番号
	/*全てのトラックに荷物を詰めていく*/
	for( int j = 0; j < k; j++ ){
		llong s = 0; //トラックを変える際に積んでいる積載量はリセットする
		/*j台目のトラックに詰めれるだけ荷物を詰めている*/
		while( s + T[i] <= P ){
			s += T[i]; 
			i++;
			if( i == n ) return n; //n個全ての荷物をトラックに詰めるとその時点で終了
		}
	}
	return i; //何番目の荷物まで詰めれたかを返す
}

/*最も最適な最大積載量Pを求める*/
int Solve(){
	llong left = 0;
	llong right = 100000 * 10000; //計算できる全荷物の最大重量
	llong mid;
	/*最大積載量がmidの時, 
	積める荷物の個数が与えられた荷物の個数より大きいということは最適解はleft側にある.
	逆に小さいとき最適解はright側にある.
	最適解の範囲を絞っていくことで最適解を求める.
	*/
	while( right - left > 1 ){
		mid = ( left + right ) / 2;
		int v = Check(mid); 
		if( v >= n ){
			right = mid; 
		}else{
			left = mid;
		}	
	}
	return right;
}


/*与えられた値を用意した変数に代入*/
int main(void){
	scanf("%d %d\n", &n, &k);
	for( int i = 0; i < n; i++ ){
		scanf("%lld\n", &T[i]);
	}
	llong ans = Solve();
	printf("%lld\n", ans);
	return 0;
}
