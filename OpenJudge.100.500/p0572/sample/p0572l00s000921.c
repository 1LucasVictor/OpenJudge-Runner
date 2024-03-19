#include <stdio.h>

int main(void){
	int l, r;
	int res;
	scanf("%d %d", &l, &r);
	if(r - l >= 2019 || l % 2019 > r % 2019 || l % 2019 == 0)
		res = 0;
	else
		res = (l % 2019) * ((l + 1) % 2019) % 2019;
	printf("%d\n", res);
	return 0;
}
