#include<stdio.h>
int main(void){
	int n,d,i;
	scanf("%d %d",&d,&n);
	if(d==0)printf("%d\n",n);
	else if(d==1)printf("%d\n",100*n);
	else printf("%d\n",10000*n);
	return 0;
}
