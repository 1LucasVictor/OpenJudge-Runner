#include<stdio.h>
#include<stdlib.h>

int main(){
  int x,y;
  int tsuru;

  scanf("%d %d",&x,&y);

  if(y%2 != 0)
    printf("No");
  else{
    if(y > 4 * x){
      printf("No");
      exit(0);
    }
    else{
      if((tsuru=(4*x-y)/2) >= 0 && x-tsuru >= 0)
	printf("Yes");
      else
	printf("No");
    }
  }
}