#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b;
	int flag = 1;
	scanf("%d %d",&a,&b);
	int i,j;
	if(a > b)
	{
		int temp = b;
		b = a;
		a = temp; 
	}
	for(i = a;i<=b;i++)
	{
		if(abs(a-i) == abs(b-i))
		{
			printf("%d",i);
			flag = 1;
			break;
		}
		else
			flag = 0;
	}
	if(flag == 0) printf("IMPOSSIBLE");
	return 0;
}