#include<stdio.h>
int main(void)
{
	int h,w,i,j;
	do{
	scanf("%d %d",&h,&w);
	if(h<=300 && w<=300)
	{
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{
			if(i==0 || i==h-1 || j==0 || j==w-1)printf("#");
			if(i!=0 && i!=h-1 && j>0 && j<w-1)printf(".");
		}
		if(h!=0 && w!=0)printf("\n");
	}
	if(h!=0 && w!=0)printf("\n");
	}
	}while(h!=0 && w!=0);
return 0;
}