int main() {
	int n, i;
  static int a[10000000], sum[10000000];
	scanf("%d", &n);
	for (i = 2;i<= n;i++){
      scanf("%d", &a[i]);
    }//n-１人の入力
	for (i = 0; i <= n; i++) {
      sum[i] = 0;
    }
	for (i = 2; i <= n; i++) 
    {
      sum[a[i]]++;
    }
	for (i = 1; i <= n; i++) {
      printf("%d\n", sum[i]);
    }
 
 
	return 0;
}