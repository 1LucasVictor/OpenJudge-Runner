#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int X,Y;
  scanf("%d %d",&X,&Y);

  if(X < 0 || X > 100){
	  return -1;
  }
  if(Y < 0 || Y > 100){
  	  return -1;
  }
     if(Y % 2 == 1){
	   printf("No");
	   return 0;
      }else{
    	  int i;
    	  for(i=0;i<=X;i++){
    		  int sum = 0;
    		  sum = 2*i + 4*(X - i);
    		  if(Y == sum){
    			  printf("Yes");
    			  return 0;
    		  }
    	  }
    	  printf("No");
      }
   return 0;
}
