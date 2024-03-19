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

int binary_search(int *w){
	long right = 100000*10000;
	long left = 0;
	while(1){
		int middle = (left+right)/2;
		int p1 = check(middle, w);
		if(p1==n){
			if(check(middle-1, w)<n){
				return middle;
			}
			right=middle;
		}
		else{
			left = middle;
		}
	}
}

int main(int argc, char const *argv[])
{
	scanf("%d %d", &n, &k);
	int w[n];
	for(int i=0;i<n;i++)
		scanf("%d", w+i);
	printf("%d\n", binary_search(w));
	return 0;
}

