#include <stdio.h>

int main(void)
{
	int t,i,j;
	
	scanf("%d" ,&t);         //??\???
	
	for(i=0;t>=3600;i++)     //????????????
	{
		t = t-3600;
	}
	for(j=0;t>=60;j++)      //???????¨????
	{
		t = t-60;
	}
	
	printf("%d:%d:%d\n",i,j,t);      //??¨???
	
	return 0;    //?????????
}