long N,D,X,Y;
main(){
	scanf("%ld%ld",&N,&D);
	while(scanf("%ld%ld",&X,&Y)+1){
		N-=(X*X+Y*Y>D*D);
    }
	printf("%ld\n",N);
}