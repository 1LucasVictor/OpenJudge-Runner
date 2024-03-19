#include "stdio.h"
#include <string.h>

int main(){
  int num[3];
  memset(num, '\0', sizeof(num));
  int five=0, seven=0;

  scanf("%d %d %d", &num[0], &num[1], &num[2]);
  for(int i=0; i<3; i++){
    if(num[i] == 5){
      five++;
    }
    else if(num[i] == 7){
      seven++;
    }
  }
  if(five == 2 && seven == 1) printf("YES");
  else  printf("NO");

  return 0;
}
