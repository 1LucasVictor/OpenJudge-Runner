#include<stdio.h>
int main(){
	int a, b, c, counter=0;
	scanf("%d %d %d", &a, &b, &c);
	for(;a<=b; a++){
		if(c%a == 0)
			counter++;
	}
	printf("%d\n", counter);
	return 0;
}