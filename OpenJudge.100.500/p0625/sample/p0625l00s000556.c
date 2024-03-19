#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,res,x;
	scanf("%d %d",&a,&b);
	res=abs(a-b);
	if(res==0 || res==1)
	printf("Yay!");
	else
	printf(":(");
	return 0;
}
	