#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<=b && b<=c && a<=c){
		printf("%d %d %d\n",a,b,c);
	}
	if(a<=b && c<=b && a<=c){
		printf("%d %d %d\n",a,c,b);
	}
	if(b<=a && c<=b && a<=c){
		printf("%d %d %d\n",b,a,c);
	}
	if(b<=a && b<=c && c<=a){
		printf("%d %d %d\n",b,c,a);
	}
	if(a<=b && c<=b && c<=a){
		printf("%d %d %d\n",c,a,b);
	}
	if(b<=a && c<=b && c<=a){
		printf("%d %d %d\n",c,b,a);
	}


	return 0;
}
