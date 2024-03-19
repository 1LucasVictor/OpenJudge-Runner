#include <stdio.h>

int main(){
	int x;
  	scanf("%d", &x);
  
  	int hp;
  	hp = (x/500) * 1000 + ((x%1000)/5) * 5;
  
  	printf("%d", hp);
  
  	return 0;
}