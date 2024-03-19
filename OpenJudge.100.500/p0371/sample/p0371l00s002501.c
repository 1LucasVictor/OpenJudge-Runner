int main(void){
	int n = 0;
	int a = 0;
	long sum = 0;
	int max = 0;
	int min = 1000000;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &a);
		sum = sum + a;
		if (max<a){
			max = a;
		}
		if (a < min){
			min = a;
		}
	}

	printf("%d %d %d\n", min,max,sum);
	return 0;
}