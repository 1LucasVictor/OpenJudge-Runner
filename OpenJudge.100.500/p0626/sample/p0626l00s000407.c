#include <stdio.h>

int main(void)
{
     int D,N;
     scanf("%d %d",&D,&N);
     switch(D){
     	case 0:printf("%d\n",N);break;
     	case 1:printf("%d\n",100*N);break;
     	case 2:printf("%d\n",10000*N);break;
     }
	return 0;
}