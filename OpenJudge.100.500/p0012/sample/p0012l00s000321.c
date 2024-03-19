#include <stdio.h>
int n;
int main()
{
	int a[10],r;
	while(~scanf("%d",&r)){
	if(!r){
	n--;
	printf("%d\n",a[n]);
	}
	else {
	a[n]=r;
	n++;
	}
	}
	return 0;
}