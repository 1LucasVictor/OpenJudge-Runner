int main(void)
{
	int a,b,c,min;

	scanf("%d %d %d",&a,&b,&c);


	if(a>b){
		min=b;
		b=a;
		a=min;
	}
	if(b>c){
		min=c;
		c=b;
		b=min;
	}
	if(a>b){
		min=b;
		b=a;
		a=min;
	}
	printf("%d %d %d\n",a,b,c);

	return 0;
}
