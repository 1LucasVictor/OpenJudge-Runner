int main(void)
{
	int h,a,n=0;

	scanf("%d%d",&h,&a);
	
	while(h>0){
		h-=a;
		n++;
	}	

 	printf("%d\n",n);
	return 0;
}
