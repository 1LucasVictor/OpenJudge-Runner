#include<stdio.h>
int main()
{
	int a,i,j[100000];
	float x1,y1,x2,y2,x3,y3,x4,y4;
	for(a=0;a<100;a++)
	{
		j[a]=0;
	}
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(((x1-x2)/(x3-x4))!=((x1-x3)/(y1-y3))&&((x1-x2)/(x3-x4))==((y1-y2)/(y3-y4)))
			j[i]=1;		
		
	}
	for(i=0;i<a;i++)
	{
		if(j[i]==0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}