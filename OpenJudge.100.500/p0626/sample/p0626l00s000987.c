#include <stdio.h>

int main(void){
	
	int a,b;
	scanf("%d %d",&a,&b);
	if(b==100)b=101;
	if(a==0)printf("%d\n",b);
	if(a==1)printf("%d\n",100*b);
	if(a==2)printf("%d\n",100*100*b);
	return 0;
}
