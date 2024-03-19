#include <stdio.h>
//#include <string.h>

int main(void){
  
  int a,b,t = 0;
  int count=0;
 
  scanf("%d %d %d", &a, &b, &t);

  /*
	for(int i=0;i<=t+0.5;i++){
      if(i%a==0){
        count=count+b;
      }
    }
  */
  
  
  printf("%d", (t/a)*b);

  return 0;
}

  

