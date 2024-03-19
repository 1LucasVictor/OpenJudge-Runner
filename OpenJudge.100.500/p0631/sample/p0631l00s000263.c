#include <stdio.h>

//猫と犬がＡ＋Ｂ匹いる。猫はＡ匹いる。残りのＢ匹は猫か犬か分からない。
//Ａ＋Ｂ匹のなかに、猫が丁度Ｘ匹いることがありえるかどうか判定しなさい。

//Ａ　Ｂ　Ｘで標準入力が与えられる。
//3 5 4 ならばYESになる


int main()
{
	int A, B, X;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &X);
	
	int k = X - A;
	
	if ( X <= A ){
		printf("YES");
	}

	else {

		if ( k <= B ){
			printf("YES");
		}

		else{
			printf("NO");
		}
	}
}
