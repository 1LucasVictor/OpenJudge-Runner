#include <stdio.h>

int main() {
	int a, b, i = 1;
	int ans;

	scanf("%d", &a);
	scanf("%d", &b);
	
  	while(b > ans){
		ans = a * i - i + 1;
      	i++;
    }
  
	printf("%d\n", i -1);
	

	return 0;
}