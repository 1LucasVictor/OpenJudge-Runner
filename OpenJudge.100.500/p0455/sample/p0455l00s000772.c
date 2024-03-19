#include <stdio.h>

int main(){
	int x;
  	scanf("%d", &x);
  	int sum = 0, p = x;
  	for(int i = 0; i < 3; i++){
    	sum += p;
      	p = p*x;
    }
    printf("%d\n", sum);
  	return 0;
  
}