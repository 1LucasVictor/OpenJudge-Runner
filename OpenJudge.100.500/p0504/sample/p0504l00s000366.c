#include <stdio.h>

int main(void){
    int H,A;
    

    scanf("%d", &H);
    scanf("%d", &A);

    int i=0;
   int num = H;
    while(num > 0){
		i++;
        num = num -A;
    }

    printf("%d",i);
    return 0;
}