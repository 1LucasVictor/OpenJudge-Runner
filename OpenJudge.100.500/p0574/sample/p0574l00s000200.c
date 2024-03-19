#include<stdio.h>

int main(void)
{
	int i;
	char c1,c2;
	scanf("%c",&c1);
	for(i=0;i<3;i++){
		scanf("%c",&c2);
		if(c1==c2){
			printf("Bad");
			return 0;
		}
		c1=c2;
	}
	printf("Good");
	return 0;
}