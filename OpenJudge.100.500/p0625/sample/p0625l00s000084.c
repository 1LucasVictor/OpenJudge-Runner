#include <stdio.h>

int main(void)
{
    int A,B;
    scanf("%d\n%d",&A,&B);
    int C=abs(A-B);
    int D=16-A-B;
    if(D-C<2&&C!=0){
    	printf(":(\n");
    	}else{
    		printf("Yay!\n");
    	}
	return 0;
}