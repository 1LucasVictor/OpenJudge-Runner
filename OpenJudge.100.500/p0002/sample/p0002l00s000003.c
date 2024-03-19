#include <stdio.h>

int main(void)
{
	int i,j,k,l;
	
	scanf("%d",&i);
	
	while(i > 0){
		scanf("%d %d %d",&j,&k,&l);
		
		if(j > k && j > l){
			if(j*j == k*k + l*l){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else if(k > j && k > l){
			if(k*k == j*j + l*l){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else {
			if(l*l == k*k + j*j){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		i--;
	}
	
	return(0);
	
}