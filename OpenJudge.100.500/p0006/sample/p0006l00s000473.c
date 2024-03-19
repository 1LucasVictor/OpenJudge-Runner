N,i,a=100000;main(){
	scanf("%d",&N);
	for(;i<N;i++){a*=1.05;a+=(a%1000!=0)?1000-a%1000:0;}
	printf("%d\n",a);
	}