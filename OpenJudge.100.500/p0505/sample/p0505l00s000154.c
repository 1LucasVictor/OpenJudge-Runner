#include<stdio.h>
int main()
{
	int h,b,a=0,i;
	scanf("%d %d",&h,&b);
	int x[b];
	for(i=0;i<b;i++){
		scanf("%d",&x[i]);
		a=a+x[i];
	}
	if(a>=h){
		printf("Yes\n");
	}
	else printf("No\n");
	return 0;
}