long D,X,Y;
main(N){
	scanf("%d%ld",&N,&D);
	while(scanf("%ld%ld",&X,&Y)+1){
		N-=X*X+Y*Y>D*D;
	}
	printf("%d\n",N);
}