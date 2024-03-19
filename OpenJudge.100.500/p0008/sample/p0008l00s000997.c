#include <stdio.h>

int main()
{
	int n, i, j, k, l;

	while(scanf("%d", &n) != EOF){
		int  num[100000] = {'\0'};
		num[0] = 2;
		l = 1;

		for(i = 3; i <= n; i++) {
			k = 0;

			j = 0;
			while(num[j] != '\0'){
				if(i % num[j] == 0) {k = 1; break;}

				j++;
			}

			if(k != 1) {num[l] = i; l++;}
		}

		j = 0;
		while(num[j] != '\0'){
			j++;
		}

		printf("%d\n", j);
	}
	
	return 0;
}