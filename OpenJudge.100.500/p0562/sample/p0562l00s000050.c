#include <stdio.h>

int main() {
	int a, b, i = 1;
	int ans;
	do{
	scanf("%d", &a);
    }while(a < 2 || a > 20);
  	do{
	scanf("%d", &b);
    }while(b < 1 || b > 20);

	
  	while(b > ans){
		ans = a * i - i + 1;
      	i++;
    }
  
	printf("%d\n", i -1);
	
	return 0;
}