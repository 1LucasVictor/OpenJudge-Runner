#include <stdio.h>
int main(){
  int x;
  do {
    scanf("%d",&x );
  } while( (x<-40) || (x>40));
  if (x>=30)
    printf("\nYes\n" );
  else
    printf("\nNo\n" );
}
