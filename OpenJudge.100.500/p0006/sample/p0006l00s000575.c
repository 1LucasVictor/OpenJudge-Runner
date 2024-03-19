main(){
	int n,a=100000;	scanf("%d",&n);
	while(n--){
		a*=1.05;
		if(a%1000>0)	a=(a/1000+1)*1000;
		else		a=a/1000*1000;
	}
	printf("%d\n",a);
	exit(0);
}