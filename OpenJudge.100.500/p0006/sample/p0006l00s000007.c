#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i;

	double tmp, tmp2;
	
	while(scanf("%d", &n)!=EOF){
		int sum = 100000;
		for(i = 0; i < n; i++){
			tmp = (double)sum*0.05/1000.0;
			tmp2 = (int)tmp;
			tmp = (tmp-tmp2 > 0)? 1000 : 0;
			sum += (int)(tmp2*1000+tmp);
		}
		printf("%d\n", sum);
	}
	return 0;
}