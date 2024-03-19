#include <stdio.h>

int main(void){
	long l, r;
	long res;
	scanf("%ld %ld", &l, &r);
	if(r - l >= 2019 || l % 2019 > r % 2019 || l % 2019 == 0)
		res = 0;
	else{
		res = 2019;
		int end = r % 2019;
		for(int i = l % 2019; i < end; i++)
			if(i * (i + 1) % 2019 < res)res = i * (i + 1) % 2019;
	}
	printf("%ld\n", res);
	return 0;
}
