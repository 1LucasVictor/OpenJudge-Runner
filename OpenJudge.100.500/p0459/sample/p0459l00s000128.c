#include <stdio.h>

int main(void){
	int x,y,i,k;
  	scanf("%d %d",&x,&y);
  	k=0;
  	for(i=0;i<=x;i++){
      	if(i*2+(x-i)*4==y){k=1;}
    }
  	if(k==0){
    	printf("No\n");
    }else{
    	printf("Yes\n");
    }  
	return 0;
}