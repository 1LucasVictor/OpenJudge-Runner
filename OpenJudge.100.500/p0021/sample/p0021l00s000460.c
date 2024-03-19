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
			
			for(i = 0;i < n;i++){
				sum = 0;
				for(j = i;j < n;j++){
					sum += a[j];
					if(sum > max)max = sum;
				}
			}
			printf("%d\n",max);
	}
		
		
	return 0;
}