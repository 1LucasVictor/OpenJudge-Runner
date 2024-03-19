#include <stdio.h>

int main(void){

    int num, train, taxi, min;

    scanf("%d",&num);
    scanf("%d",&train);
    scanf("%d", &taxi);

    printf("%d", (num * train > num * taxi) ? num * taxi : num * train); 
    
 	return 0;
}