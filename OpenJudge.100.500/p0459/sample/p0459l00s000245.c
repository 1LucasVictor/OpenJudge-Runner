#include<stdio.h>

int main(){
	int s;
	int n;
	scanf("%d %d",&s,&n);
	
	if(n % 2 == 0 && (n >= 2*s && n <= 4*s)){
	    printf("Yes");
	}
	else{
		printf("No");
	}
}
			