#include<stdio.h>

int main(void){
 	int H,A;

	scanf("%d %d",&H,&A);

 	int i=0;

  	while(H>0){
		    H=H-A;
      	i++;
    }

    printf("%d",i);

  	return 0;
}
