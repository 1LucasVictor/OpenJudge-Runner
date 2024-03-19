int main(){
	int n,m;
	int a[100][100];
	int b[100];
	int i, j;



	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			int in;
			scanf("%d", &in);
			a[i][j] = in;
		}
	}

	for (i = 0; i < m; i++){
		int in;
		scanf("%d", &in);
		b[i] = in;
	}

	for (i = 0; i < n; i++){
		int out = 0;
		for (j = 0; j < m; j++){
			out += a[i][j] * b[j];
		}
		printf("%d\n", out);
	}

	return 0;
}