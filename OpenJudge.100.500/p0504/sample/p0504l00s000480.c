#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int  H,A,i;

//入力
    scanf("%d %d",&H,&A);

    if(H<=A) {printf("\n 1 \n");return 0;}

    for(i=0;H>0;i++) H-=A;

    printf("\n %d \n",i);
    return 0;
}