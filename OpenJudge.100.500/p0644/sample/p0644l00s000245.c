#include <stdio.h>
int main(void)
{
	int s1;
	int s2;
	int s3;
	int nyu;
	int bee;
	bee = 0;
	
	scanf("%d",&nyu);
	
	s1 = nyu % 10;
	s2 = (nyu % 100 - s1) / 10;
	s3 = (nyu - s1 - (s2 * 10)) / 100;
	
	if((s1 == 1 || s1 == 0) && (s2 == 1 || s2 == 0) && (s1 == 1 || s1 == 0)){
		if(s1 == 1){
			bee++;
		}
		if(s2 == 1){
			bee++;
		}
		if(s3 == 1){
			bee++;
		}
		printf("%d",bee);
	}
	return(0);
}
