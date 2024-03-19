#include<stdio.h>
int main()
{
int a[200000],b,i,j,m;
scanf("%d",&b);
for(i=0;i<=b-1;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<=b-1;i++)
{
	for(j=i+1;j<=b-1;j++)
	{	
		if(a[i]==a[j]) 
		{
			m=1;
			break;
		}
	} 
	if(m==1)
	{
		break;
	}
}
if(m==1)
printf("NO");
else
printf("YES");
return 0;	  		
}