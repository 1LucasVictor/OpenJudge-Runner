main(){
	int n,a,b,c,t;	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		if(a>c)	t=a,a=c,c=t;
		if(b>c)	t=b,b=c,b=t;
		if(a*a+b*b==c*c)	puts("YES");
		else				puts("NO");
	}
	exit(0);
}