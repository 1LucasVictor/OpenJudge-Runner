#include <stdio.h>
#include <string.h>

int main(){
	int a,b,num,i,j;
	
	while(scanf("%d %d", &a ,&b) != EOF)
	{
		num = a +b;
		for(j = 0;num != 0; j++){
				num = num/10;
		}
		printf("%d",j);
	}
	
	return 0;
}