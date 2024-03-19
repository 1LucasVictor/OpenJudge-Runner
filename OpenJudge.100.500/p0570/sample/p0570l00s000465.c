main(){
	int A,B,K=0;
	int i;

	
	scanf("%d",&A);
	scanf("%d",&B);
	
	K=(A+B)/2;
	if(abs(A-K)==abs(B-K)){
		printf("%d",K);
	}
	else{
		printf("IMPOSSIBLE");
	}
	
	
}