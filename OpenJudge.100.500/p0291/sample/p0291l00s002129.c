int main() {
	int R[20000], n, i, maxv, minv;
	
        scanf("%d", &n);
	for (i = 0;i < n;i++) scanf("%d", &R[i]);

        maxv = -200000;
        minv = R[0];

	for (i = 1;i < n;i++) {
          if(maxv < R[i] - minv) maxv = R[i] - minv;
          if(minv > R[i]) minv = R[i];

	}

	printf("%d\n", maxv);

	return 0;
}