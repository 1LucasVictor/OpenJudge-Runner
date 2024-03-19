#include<stdio.h>

int main(void){
	int a, b, n, a1, a2, b1;
	int i;
	int c, d;	//最大公約数,最小公倍数

	while (scanf("%d %d", &a, &b) != EOF){		//Ctrl+Zが押されるまで繰り返す
		if (a < b){		//a>bになるように入れ替える
			n = a; a = b; b = n;
		}


		for (i = a; i>0; i--){		//最大公約数を求める
			if (a / i == (double)a / (double)i){
				if (b / i == (double)b / (double)i){
					c = i;
					break;
				}
			}
		}
		i = 1;
		while (1){		//最小公倍数を求める
			if (a*i / b == (double)a*i / (double)b){
				d = i;
				break;
			}
			i++;
		}
		printf("%d %d\n", c, a*d);
	}

	return 0;

}