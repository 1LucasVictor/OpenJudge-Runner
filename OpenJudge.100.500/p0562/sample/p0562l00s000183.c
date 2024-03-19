#include <stdio.h>

int main() {
	int a, b,i= 0, ans = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	
  	while(b > ans){
      i++;
      if(i == 1)
        ans = a * i;
      else
        ans = a * i - i + 1;
    }
  
  	printf("%d\n", i);
  
	return 0;
}