#include <stdio.h>
#include <stdlib.h>

int n, k;

int check(int P, int* w){
	int i = 0;
	int* car = (int*)calloc(k, sizeof(int));
	int j;
	for(j=0;j<k;j++){
		while(car[j]+w[i]<=P){
			car[j] += w[i];
			i++;
			if(i==n) return i;
		}
	}
	free(car);
	return i;
}

/*int binary_search(void){
	long right = 100000*10000;
	long left = 0;
	while(true){
		int p1 = check(right);
		int p2 = check()
	}
}*/

int main(int argc, char const *argv[])
{
	scanf("%d %d", &n, &k);
	int w[n];
	for(int i=0;i<n;i++)
		scanf("%d", w+i);
	for(int P=1;P<10000000;P++){
		if(check(P, w)==n){
			printf("%d\n", P);
			break;
		}
	}
	return 0;
}

