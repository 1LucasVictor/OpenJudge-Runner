#include <stdio.h>
 
int main(void)
{
     int D,N;
     scanf("%d %d",&D,&N);
     if(N!=100){
     switch(D){
     	case 0:printf("%d\n",N);break;
     	case 1:printf("%d\n",100*N);break;
     	case 2:printf("%d\n",10000*N);break;
     }
     }else{
     	switch(D){
     	case 0:printf("%d\n",N+1);break;
     	case 1:printf("%d\n",100*N+1);break;
     	case 2:printf("%d\n",10000*N+1);break;
     }
     }
	return 0;
}