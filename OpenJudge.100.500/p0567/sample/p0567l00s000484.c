#include<stdio.h>

int main(){
	//nを入力
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	//計算
	c = c - (a - b);
	if(c < 0){
		c = 0;
	}
	//表示
	printf("%d", c);

	return 0;
}