#include<stdio.h>
int main()
{   int a,b,c;
int N[10]={0};
scanf("%d%d%d",&a,&b,&c);
N[a]++;
N[b]++;
N[c]++;
if(N[5]==2&&N[7]==1)printf("YES\n");
else printf("NO\n");
	return 0;
}