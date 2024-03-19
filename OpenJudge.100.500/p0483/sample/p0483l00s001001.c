#include<stdio.h>

int main(void)
{
	int n;

	scanf("%d",&n);

	if(n/100==7){
		puts("Yes");
	}
	else{
		n=n%100;
		if(n/10==7){
			puts("Yes");
		}
		else{
			if(n%10==7){
				puts("Yes");
			}
			else puts("No");
		}
	}
	
	return 0;
}
