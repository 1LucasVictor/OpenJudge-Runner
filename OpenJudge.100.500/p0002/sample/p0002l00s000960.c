#include <stdio.h>

int main(){
	int i;
	int N;
	int change;

	scanf("%d", &N);

	int x[N];
	int y[N];
	int z[N];

	for(i=0;i<N;i++){
		scanf("%d %d %d", &x[i], &y[i], &z[i]);
	}

	for(i=0;i<N;i++){

		if(x[i] <= y[i]){
			change = x[i];
			x[i] = y[i];
			y[i] = change;
		}

		if(x[i] <= z[i]){
			change = x[i];
			x[i] = z[i];
			z[i] = change;
		}

		if(x[i]*x[i] == y[i]*y[i] + z[i]*z[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
	}

	return 0;

}