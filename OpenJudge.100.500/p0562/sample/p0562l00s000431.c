#include <stdio.h>

int main() {
	int a, b,i= 1, ans = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	
  	while(b > ans){
   		if(i == 1){
        	ans = a * i;
          	i++;
        }
    	else{
           ans = a * i - i + 1;
           i++;
        }
  	}
  
  	printf("%d\n", i-1);
  
	return 0;
}