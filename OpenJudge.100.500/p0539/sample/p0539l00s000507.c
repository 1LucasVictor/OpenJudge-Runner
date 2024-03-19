/*  ex3_4
    potter0723sw  */

//方針：Nを１〜９で割ってみて商が１〜９かつ余りが０か調べる

#include <stdio.h>

int main(void) {
	int N,quotient,remainder,d;//dはdevide
	scanf("%d", &N);
	d = 1;
	while(d <= 9){//1~9まで調べる
		quotient = N / d;//商
		remainder = N % d;//余り
    	if(quotient >= 1 && quotient <= 9 && remainder == 0){//商が１〜９かつ余りが０
			printf("Yes\n");
			break;//Yesを出力してwhile脱出
		}
		d += 1;
	}
	if(d == 10){//１〜９まで試してダメだった場合d=10なのでその時にNoを出力
		printf("No\n");
	}
	return 0;
}
