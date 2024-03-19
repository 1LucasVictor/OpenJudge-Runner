#include <stdio.h>

int main(){
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  
  if(B+C>A){
  printf("%d\n",(B+C)-A); 
} else{
  printf("%d\n",0);
}
 return 0;
}