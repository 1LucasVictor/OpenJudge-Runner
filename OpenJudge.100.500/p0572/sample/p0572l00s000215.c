#include <stdio.h>

int main(void){
  int L,R,min = 2018;
  scanf("%d %d",&L,&R);
  if(R-L>=2019){printf(0);return 0;}
  for(int i = L;i <= R;i++){
	  for(int j = i + 1;j <= R;j++){
        if(min > (i*j)%2019)min=(i*j)%2019;
	  }  
  }
  printf("%d",min);  
  return 0;
}