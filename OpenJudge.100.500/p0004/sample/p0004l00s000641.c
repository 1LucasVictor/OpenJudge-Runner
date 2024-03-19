/*

aとbの最小公倍数、最大公約数を求めよ。
aとbは20億以下とする。
ただし、公倍数も20億以下とする。

やり方：
	・aとbを入力。
	・最小公倍数を求める関数koubai00と、最大公約数を求める関数kouyaku00を使い、
		配列2つ（koubai[]とkouyaku[]）にそれぞれ記録していく。
	・表示して終わり。

結果：Time limit exceeded

扱う数字の桁が大きすぎて、どうにも遅い。
	億単位の数字を入れると計算に数秒かかる始末。
タイムリミットと言われても、どうしたものか。

*/
#include <stdio.h>
#include <math.h>

int koubai00(int a, int b);		//最小公倍数を求める関数。詳細は下部。
int kouyaku00(int a, int b);		//最大公約数を求める関数。ユークリッドさんの互除法。
int small00(int a, int b);		//2つの整数の内、小さい方を返す関数。kouyaku00に使う。
int big00(int a, int b);

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
		if(a[i]>2000000000||b[i]>2000000000){
			i--;
		}
		i++;
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
{							//iを1から増やしていき、aとbの両方で割り切れた時に終了。その時のiを返す。力技。
	int i;
	for(i=1; i<=2000000000; i++){
		if(i%a==0&&i%b==0){
			break;
		}
	}
	return i;
}

int kouyaku00(int a, int b)				//最大公約数を求める関数。ユークリッドの互除法とやらを使う。
{
	int i=small00(a,b);				//数の大小関係をハッキリさせないといけないので、iとkに分ける。
	int k=big00(a,b);
	int r;
	while(a!=0){
		r=b%a;
		b=a;
		a=r;
	}
	return b;
}

int small00(int a, int b)				//aとbの内、小さい方を返す関数。
{							//同じだったら0を返す。
	if(a<b){
		return a;
	}
	else if(a>b){
		return b;
	}
	else{
		return 0;
	}
}

int big00(int a, int b)					//aとbの内、大きい方を返す関数。
{							//同じだったら0を返す。
	if(a<b){
		return b;
	}
	else if(a>b){
		return a;
	}
	else{
		return 0;
	}
}