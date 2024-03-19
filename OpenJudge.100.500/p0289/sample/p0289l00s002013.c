#include <stdio.h>

main(){
  int x, y, r;

  scanf("%d", &x);
  scanf("%d", &y);
  if(x > y){
    while(1){
      r =  x % y;
      if(r != 0){
	x = y;
	y = r;
      }
      else{
	printf("%d\n", y);
	return 0;
      }
    }
  }
}