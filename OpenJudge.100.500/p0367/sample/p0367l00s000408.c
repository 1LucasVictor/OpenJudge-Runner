#include <stdio.h>

int main(void)
{
	int a,b,c,d,e = 0;
	
	scanf("%d %d %d",&a,&b,&c);

	while(a <= b){
		
		d = c % a;
		
		if(d == 0){
			++e;
		}
		++a;
	}
	
	printf("%d\n",e);

	return 0;
}