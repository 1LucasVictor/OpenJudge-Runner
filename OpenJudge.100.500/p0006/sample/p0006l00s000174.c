#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int i;
  int Debt = 100000, r;
  for(i=0; i<n; i++){
    Debt *= 1.05;
    if(Debt % 1000 != 0){
      r = Debt % 1000;
      Debt += 1000-r;
    }
  }
  printf("%d\n", Debt);
  return 0;
}