#include <stdio.h>

int main (){
  int h,a;
  scanf("%d%d", &h,&a);

  for(int i=1; i<=h; i++){
    if(a*i>=h){
      printf("%d\n", i);
      break;
    }
  }


 return 0;
}
