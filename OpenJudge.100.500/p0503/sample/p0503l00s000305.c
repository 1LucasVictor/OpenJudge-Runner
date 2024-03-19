#include<stdio.h>
int a[200000];
main()
{
int i,j,n,m=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])  m=0;
	}
	if(m==0) break;
}
if(m==1) printf("YES");
else if(m==0) printf("NO");
}