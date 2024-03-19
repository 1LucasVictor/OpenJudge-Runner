#include<stdio.h>
int main()
{
	int ar[3];
	int fiv=2;
	int sev=1;
	for(int i=0;i<3;i++)
	{
		scanf("%d",&ar[i]);
		if(ar[i]==5)fiv--;
		if(ar[i]==7)sev--;
	}
	if(fiv==0&&sev==0){
		printf("YES");
	}
	else printf("NO");
	return 0;
	}