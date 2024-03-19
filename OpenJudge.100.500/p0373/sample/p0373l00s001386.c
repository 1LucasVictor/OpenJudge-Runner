#include<stdio.h>


int main(void){
  int i,v,W,H;

  while(1){
    scanf("%d %d",&W,&H);

    if(W==0 && H==0){
      break;
    }else{
      for(i=1;i<=W;i++){
	for(v=1;v<=H;v++){
	  if(i==1 || v==1 || i==W || v==H){
	    printf("#");
	  }else{
	    printf(".");
	  }
	}
	printf("\n");
      }
      printf("\n");
    }
  }
}

