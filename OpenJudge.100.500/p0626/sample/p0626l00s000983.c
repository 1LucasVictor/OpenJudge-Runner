#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==100) b+=1;
	if(a==0) printf("%d\n",b);
	if(a==1) printf("%d\n",b*100);
	if(a==2) printf("%d\n",b*100*100);
	return 0;
}
