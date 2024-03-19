
int isPrime(int a[]);
int n,p;
int count = 0;
int main(){
	int a[10000], i, count =0,x[200000];

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}

	p = isPrime(x);

	for (i = 0; i < n; i++){
		if (i != 0){ printf(" "); }
		printf("%d", x[i]);
	}

	printf("\n");
	printf("%d",p);

	return 0;
}

int isPrime(int a[]){
	int i;
	int min;
	int j;
	int g;
	int max;
	int p = 0;

	//????°????????????????
	for (i = 0; i < n; i++){
		min = a[n-1];
		for (g = n-1; g > i; g--){
			if (a[g] < a[g-1]){
				j = a[g - 1];
				a[g - 1] = a[g];
				a[g] = j;
				count++;
			}
		}
	}

	return count;
}