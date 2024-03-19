#include <stdio.h>
#define N 10000

int main()
{
	int S[N], T[N];
	int i, j, n, q;
	int a=0;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &S[i]);
	}
	scanf("%d", &q);
	for(i = 0; i < q; i++){
		scanf("%d", &T[i]);
	}
	for(j = 0; j < q; j++){
		for(i = 0; i < n; i++){
			if(T[j] == S[i]){
				a++;
			}
		}
	}
	
	printf("%d\n", a);
	
	return 0;
}