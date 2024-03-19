#include <stdio.h>
int main()
{
	int i=0,j,a[1000],b[1000],ans[1000];
	char op[1000];
	while(1){
		scanf("%d %c %d",&a[i],&op[i],&b[i]);
		if(op[i]=='?')break;
		switch(op[i]){
		case'+':ans[i]=a[i]+b[i];break;
		case'-':ans[i]=a[i]-b[i];break;
		case'*':ans[i]=a[i]*b[i];break;
		case'/':ans[i]=a[i]/b[i];break;
		}
		i++;
	}
	for(j=0;j<i;j++)
	{
		printf("%d\n",ans[j]);
	}
	return 0;
}