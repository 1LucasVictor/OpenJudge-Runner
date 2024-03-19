#include <stdio.h>

int GreComDiv( long a,long b );

int main()
{
	long a,b;
	long gcd;//最大公約数
	long lcm;//最小公倍数
	long tmp;

	//ユークリッドの互除法
	while( scanf("%ld %ld",&a, &b) != EOF){
		//a >= b の順番になるよう入れ替え
		if(a < b){
			tmp = a;
			a = b;
			b = tmp;
		}

		gcd = GreComDiv(a,b);
		//表現範囲を超えてしまうため、除算から行う
		lcm = a * (b / gcd);

		printf("%ld %ld\n",gcd, lcm);
	}
	return 0;
}


int GreComDiv( long a,long b ){
	long tmp;
	while(a % b != 0){
			tmp = b;
			b = a % b;
			a = tmp;
	}

	return b;
}