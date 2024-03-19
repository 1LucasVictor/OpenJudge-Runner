#include <stdio.h>

int main(void)
{
	int x, i, sum, cnt;
	int array[1000];
	
	cnt = 0;
	while(1) {
		//xに値を入力する
		scanf("%d", &x);
		
		//入力が0の時、繰り返しを終了する
		if(x == 0) {
			break;
		}
		
		sum = 0;
		while(x > 0) {
			sum += x % 10;
			x /= 10;
		}
		
		array[cnt++] = sum;
	}
	
	//各桁の和を出力する
	i = 0;
	while(i < cnt) {
		printf("%d\n", array[i++]);
	}
	return 0;
}
