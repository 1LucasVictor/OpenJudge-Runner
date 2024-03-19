#include<stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	
	while(x){
		int a = x%10;
		if(a == 7){
			printf("Yes");
			return 0;
		}
		x = x/10;
	}
	
	printf("No");
	return 0;
}