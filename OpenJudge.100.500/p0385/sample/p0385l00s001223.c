#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int fcs(char x)
{
	int t;
	t=x;
	t-=48;
	return t;
}
int main()
{
	//48:'0'   57:'9'
	int a[99999],tint[1100],i,j,t,len,h;
	char tchar[1100];
	scanf("%s",tchar);
	t=tchar[0];
	while(t!=48)
	{
		
		i++;
		h=0;
		len=strlen(tchar);
		for(j=0;j<=len-1;j++)
			tint[j+1]=fcs(tchar[j]);
		for(j=1;j<=len;j++)
			h+=tint[j];
		a[i]=h;
		scanf("%s",tchar);
		t=tchar[0];
	}
	for(j=1;j<=i;j++)
		printf("%d\n",a[j]);
	return 0;
}
