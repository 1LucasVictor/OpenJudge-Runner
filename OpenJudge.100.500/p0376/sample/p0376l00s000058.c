int main(void)
{
	int A[100],i,j;
	
	scanf("%d", & i);
	
	for(j=0;j<=i-1;j++){
		scanf("%d", & A[j]);
	}
	for(j=i-1;j>=0;j--){
		printf("%d", A[j]);
		if(j!=0) printf(" ");
	}
	printf("\n");
	return 0;
}