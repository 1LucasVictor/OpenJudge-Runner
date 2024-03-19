#include<stdio.h>
int main()
{
	int i,n,a,b,ans;
	scanf("%d%d",&a,&b);
	if(a<=9 && b<=9){
	
	ans=a*b;
	printf("%d",ans);}
	else {
	printf("-1");}
	return 0;
}