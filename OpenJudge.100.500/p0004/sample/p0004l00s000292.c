#include <stdio.h>

int main(){
	int x, y, X, Y, I;
	int A[100];
	int B[100];
	int C[100];
	int i=0;
	int tmp;
	while(scanf("%d%d", &x, &y)!=EOF)
	{
		X=x;
		Y=y;
		if(y>x)
		{
			tmp=x;
			x=y;
			y=tmp;
		}
		while(1)
		{
			x=x%y;
			tmp=x;
			x=y;
			y=tmp;
			if(y==0)
			{
				I=i;
				break;
			}
		}
		A[i]=x;
		B[i]=X/A[i]*Y;
		i++;
	}
	for(i=0;i<I+1;i++)
	{
		printf("%d %d\n", A[i], B[i]);
	}
	return 0;
}