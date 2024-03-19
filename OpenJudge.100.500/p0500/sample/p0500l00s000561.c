#include<stdio.h>

int main(void){
	int N, M, i;
	int s[5];
	int c[5];
	int j = 1;
	int l;
	int num[3];

	scanf("%d %d", &N, &M);

	for (i = 0; i < 5; i++) {
		if (i < M)
			scanf("%d %d", &s[i], &c[i]);
		else{
			s[i] = 0;
			c[i] = 0;
		}
	}

	for (i = 0; i < 5; i++){
		for (l = 0; l < 5; l++){
			if (s[i] == s[l] && c[i] != c[l])
				j = 0;
		}
		if (s[i] == 1 && c[i] == 0){
			j = 0;
			if (N == 1){
				j = 1;
				for (l = 0; l < 5; l++){
					if (c[i] != c[l])
						j = 0;
				}
			}
		}
		if (s[i] > N)
			j = 0;
	}

	if (s[4] == 1 && c[4] == 0){
		j = 0;
	}



	num[0] = 0;
	num[1] = 0;
	num[2] = 0;

	if (j != 0){
		for (i = 0; i < 5; i++){
			if (s[i] == 1)
				num[0] = c[i];
			else if (s[i] == 2)
				num[1] = c[i];
			else if (s[i] == 3)
				num[2] = c[i];
		}
		for (i = 0; i < N; i++){
			printf("%d", num[i]);
		}
	}
	else{
		printf("-1");
	}
}