#include<stdio.h>
#include<math.h>
#include<string.h>
int main( )
{ 
	int i,p=1;
	char a[20];
	char b[20];
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;a[i];i++)
	if(a[i]!=b[i])
	p=0;
	if((strlen(b)-strlen(a))!=1)
	p=0;
	if(p==0)
	{printf("No");return 0;}
	if(p==1)
	{printf("Yes");return 0;}
}
