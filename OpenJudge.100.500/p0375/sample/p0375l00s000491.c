void call(int n){
	int i;
	for (i = 1; i <= n; i++){
		int x = i;
		if (x % 3 == 0){
			printf(" %d", i);
		}
		else{
			while (x != 0){
				if (x % 10 == 3){
					printf(" %d", i);
					break;
				}
				else{
					x = x / 10;
				}
			}
		}
	}
	printf("\n");
}


int main(void){
	int n = 0;
	int i = 0;

	scanf("%d", &n);
	call(n);
	return 0;
}