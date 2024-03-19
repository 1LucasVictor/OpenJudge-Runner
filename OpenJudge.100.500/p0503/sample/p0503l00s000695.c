#include<stdio.h>
int main()
{
int i,j,n,m=1;
int a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j]) m=0;
	}
}
if(m) printf("YES");
else printf("NO");
return 0;
}