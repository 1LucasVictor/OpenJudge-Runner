main(){
	int A,B,K=0;
	int i;

	
	scanf("%d",&A);
	scanf("%d",&B);
	
	for(i=0;i<100000000;i++){
		if(abs(A-K)==abs(B-K)){
			printf("%d",K);
			return 0;
			
		}
		K++;
	}
	for(i=0;i<100000000;i++){
		if(abs(A-K)==abs(B-K)){
			printf("%d",K);
			return 0;
			
		}
		K--;
	}
	printf("IMPOSSIBLE");
	
}