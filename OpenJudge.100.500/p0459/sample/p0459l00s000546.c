#include <stdio.h>

int main(void){
  int X,Y;
  scanf("%d %d",&X,&Y);

  int Z = Y - (2*X);
  int A = Z / 2;
  int B = X - A;
  if((A*4)+(B*2)==Y && A>=0 && B >=0){
    printf("%s\n","Yes");
  }else{
    printf("%s\n","No");
  }
}
