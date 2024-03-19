#include<stdio.h>

int main(){
  int i,j,a,l,f,count;

  count = 0;
  
  scanf("%d",&l);
  
  for(i = 0; i < l; i++){
    scanf("%d",&a);
    f = 0;
    if(a == 1) continue;
    if(a == 2) j = a;
    
    for(j = 3; j < a; j++){
      if((a % j) == 0)
	break;  
    }
    if(j == a) count++;
  }

  printf("%d\n",count);
  
  return 0;
  
}

