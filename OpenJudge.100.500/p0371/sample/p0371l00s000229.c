int main(void){
	int n = 0;
	int a = 0;
	int i = 0;
	long long sum = 0;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &a);
		sum += a;
		if (max < a){
			max = a;
		}
		if (a < min){
			min = a;
		}
	}

	printf("%d %d %d\n", min,max,sum);
	return 0;
}