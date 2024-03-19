#include <stdio.h>

int main(void){
	int a, b, c;
	int i;
	int output_num=0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	for(i=a ; i <= b ; i++){
		if(c % i == 0){
			output_num++;
		}
	}
	printf("%d\n", output_num);
	
	return 0;
}