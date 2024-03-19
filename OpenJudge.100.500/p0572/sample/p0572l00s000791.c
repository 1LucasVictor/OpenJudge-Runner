#include <stdio.h>

int main(void){
  long int L,R,min = 2018;
  scanf("%ld %ld",&L,&R);
  if(R-L>=2019){printf(0);return 0;}
  for(long int i = L;i <= R;i++){
	  for(long int j = i + 1;j <= R;j++){
        if(min > (i*j)%2019)min=(i*j)%2019;
	  }  
  }
  printf("%d",min);  
  return 0;
}