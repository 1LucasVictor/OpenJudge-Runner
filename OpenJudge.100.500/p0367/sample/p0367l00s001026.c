#include <stdio.h>

int main(void)
{
	int a,b,c;
	int i;
	int point = 0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	for(i = 1;i < 10000;i++){
		if(c % i == 0){
			if(a <= i && i <= b){
				point++;
			}
		}
	}
	
	printf("%d\n",point);
	
	return(0);
}