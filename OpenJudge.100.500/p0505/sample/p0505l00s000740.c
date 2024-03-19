#include<stdio.h>
int main()
{ int a,b,s[10000],i,sum=0;
scanf("%d %d",&a,&b);
for(i=0;i<b;i++)
	{scanf("%d",&s[i]);
sum+=s[i];
}
if(sum>=a) printf("Yes");
else printf("No");





}