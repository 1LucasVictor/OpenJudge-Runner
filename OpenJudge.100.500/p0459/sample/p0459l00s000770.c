#include <stdio.h>
int main(){
	int X,Y,num=0;
  	scanf("%d %d",&X,&Y);
  	for(int i=0; i<=X; i++){
    	if((Y-2*i)+((X-i)*4)==Y){
        		num=1;
          break;
        	}
    	}
  if(num==0) printf("No");
  if(num==1) printf("Yes");
	}

