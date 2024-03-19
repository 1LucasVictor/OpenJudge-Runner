#include<stdio.h>
int main()
{
	int a,k,i,max=-1,min=124;

	for(i=0;i<5;i++){
		scanf("%d",&a);
		max=a>max?a:max;
		min=a<min?a:min;
	}
	scanf("%d",&k);

	printf("%s",max-min<k?"Yay!":":(");
	return 0;
}