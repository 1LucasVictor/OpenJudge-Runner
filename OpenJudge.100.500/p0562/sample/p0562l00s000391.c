#include <stdio.h>

int main(void){
    int A, B;
    int n = 0, i;

    scanf("%d %d",&A, &B);

    n = A;
    for(i = 0; n < B; i++){
        n = (A*i  + i);
    }
	
  	if(i == 0)
      i = 1;
    printf("%d\n",i);

    return 0;
}
