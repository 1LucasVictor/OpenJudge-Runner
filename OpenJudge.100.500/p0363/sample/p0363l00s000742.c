
#include <stdio.h>
int main (void)
{
	int a,b,c;
	scanf("%d %d %d\n",&a,&b,&c);
	if(a<b){
		if(a>c){
			printf("%d %d %d\n",c,a,b);
		}else{
			printf("%d %d %d\n",a,c,b);
		}
	}else{
		if(b<c){
			printf("%d %d %d\n",b,c,a);
		}else{
			printf("%d %d %d\n",c,b,a);
		}
	}
	if(c>b){
		if(a>b){
			printf("%d %d %d\n",b,a,c);
		}else{
			printf("%d %d %d\n",a,b,c);
		}
	}
	return 0;
}