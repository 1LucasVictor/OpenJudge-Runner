int main(void){
	int n;
	int i,j,k;
	int a[5000];
	int max,sum = 0;
	
	
	while(1){
		scanf("%d",&n);
		if(n == 0)break;
			for(i = 0;i < n;i++){
				scanf("%d",&a[i]);
			}
			max = a[0];
			
			for(i = 1;i <= n;i++){
				for(j = 0;j <= n-i;j++){
					for(k = j;k < j+i;k++){
						sum += a[k];
					}
					if(sum > max)max = sum;
					sum = 0;
				}
			}
			printf("%d\n",max);
	}
		
		
	return 0;
}