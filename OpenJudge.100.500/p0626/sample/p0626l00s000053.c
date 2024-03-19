#include<stdio.h>
int main()
{
	int d,n;
	scanf("%d %d",&d,&n);
	if(n==100) n+=1;
	if(d==0) printf("%d\n",n);
	else if(d==1) printf("%d\n",100*n);
	else ("%d\n",(100*100)*n);
	return 0;
}