int main()
{
	int a[100],x,i,j,k,m,tmp;
	int count=0;
	
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{scanf("%d",&a[i]);}
	
	
	for(k=x;0<k;k--){
	for(j=0;j<k;j++){
		if(a[j]>a[j+1]){
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
			count=count+1;
		}}}
	
	for(m=0;m<x;m++)
	{printf("%d ",a[m]);}
	puts("");
	printf("%d",count);
	
	return 0;
	
}