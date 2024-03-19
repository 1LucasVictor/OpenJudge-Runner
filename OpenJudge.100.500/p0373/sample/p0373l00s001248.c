#include<stdio.h>
int main()
{
	int i,j,w,h;
	while(1)
	{
	scanf("%d%d",&w,&h);
	if(w==0&&h==0)break;
	for(i=0;i<w;i++)
	  {
		for(j=0;j<h;j++)
		{
         if(i==0||i==w-1||j==0||j==h-1)
         {
         	printf("#");
         }
         else
         {
         	printf(".");
         }
		}
		printf("\n");
	   }
	   printf("\n");
    }
    return 0;
}