#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
   if(((c-b)<=a)&&((c-b)>0))  printf("safe");
	else if(((c-b)<=a)&&((c-b)<0))  printf("delisious");
	else if((c-b)>=a)  printf("dangerous"); 	
}
