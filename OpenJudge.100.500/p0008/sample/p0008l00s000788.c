/*

n以下の素数がいくつあるか数えて出力せよ。
複数のデータセットが与えられる。

やり方：
	・n[]を入力。
	・データセットごとに、「n以下の素数の数を表示する関数」"sosuu01"を使って終わり。

結果：Time limit exceeded

--------------------------------------------------------------------------------

3:41 2013/01/16

データセットに配列を使わないことにした。10027の例に倣い。
それでもTime limit。どうしろと。
sosuu01が、力技で全ての整数を見てるから、そこを改良したい。

--------------------------------------------------------------------------------

だめだ。

--------------------------------------------------------------------------------

17:23 2013/02/02

春休み勉強会の講義資料に、素数判定の関数のもっと良い方法があった。
「nがaで割り切れる（n/a=b）なら、nはbでも割り切れるため、ループで増やしていくiの上限は、nの平方根(i*i<=nまで)で良い」	らしい。

*/

#include <stdio.h>

int sosuu00(int n);
void sosuu01(int n);		//n以下の素数の数を表示する関数。

int main()
{
	int n;
	int ret;
	while(1){
		ret=scanf("%d",&n);
		if(ret==EOF){
			break;
		}
		sosuu01(n);
	}
	return 0;
}

void sosuu01(int n)
{
	int i;
	int count=0;
	for(i=2; i<=n; i++){
		if(i%2==0&&i!=2){
			continue;
		}
		if(sosuu00(i)){
			count++;
		}
	}
	printf("%d\n",count);
	return;
}

int sosuu00(int n)
{
	int i;
	if(n<2){
		return 0;
	}
	if(n==2){
		return 1;
	}
	for(i=2; i*i<=n; i++){
		if(i%2==0){
			continue;
		}
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}