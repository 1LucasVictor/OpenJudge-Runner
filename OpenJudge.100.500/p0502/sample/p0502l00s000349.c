#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  int a;
  int i;
  int flag = 1;
  for(i=0; i<n; i++){
    scanf("%d", &a);
    if(a % 2 == 0)
      if(!(a % 3 == 0 || a % 5 == 0)){
	flag = 0;
	break;
      }
  }
  if(flag == 0)
    puts("DENIED");
  else
    puts("APPROVED");
  
  return 0;
}
