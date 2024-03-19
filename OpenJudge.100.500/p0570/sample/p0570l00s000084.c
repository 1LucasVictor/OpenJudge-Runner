#include <stdio.h>

int main(void) {

	int A;
	int B;

	scanf("%d", &A);
	scanf("%d", &B);      
    
  
    if((A+B)%2 == 0){
      printf("%d",(A+B)/2);
    }
    else{
      puts("IMPOSSIBLE");
    }

      
  
	return 0;
}
