#include<stdio.h>

int main(){
	int a, b, c, i=0;
	scanf("%d %d %d", &a, &b, &c);
	while(1){
		if(c%a == 0){
			i++;
		}
		a++;
		if(a==b){
			break;
		}
	}
	printf("%d\n", i);
	return 0;
}