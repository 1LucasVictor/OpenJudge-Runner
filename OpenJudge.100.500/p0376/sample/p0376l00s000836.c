#include<stdio.h>
int main(void){
	int i, n;
	scanf("%d",&n);
	int x[n];
	for(i=n;i>=1;i--)
		scanf("%d",&x[i]);
	for(i=1;i<=n;i++){
	    if(i>1) putchar(' ');
		printf("%d",x[i]);
	}
	printf("\n");
return(0);
}
