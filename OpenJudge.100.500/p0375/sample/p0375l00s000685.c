#include<stdio.h>
int main(){
	int n, i = 0;
	scanf("%d", &n);
	while(i != n) {
		i++;
		if(i % 3 == 0){
			printf(" %d", i);
		}else if(i % 10 == 3){
			printf(" %d", i);
		}
	}
	printf("\n");
}
