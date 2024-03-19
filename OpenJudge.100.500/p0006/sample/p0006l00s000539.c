#include <stdio.h>

int main(void){
  int debt = 100000,n;
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
    debt *= 1.05;
    while(debt % 1000)debt++;
  }
  printf("%d\n",debt);
  return 0;
}
