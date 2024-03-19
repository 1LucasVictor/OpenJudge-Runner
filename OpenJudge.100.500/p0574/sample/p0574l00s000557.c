#include<stdio.h>
int main(void){
  int i,f=1;
  char n,f_n;
  scanf("%c",&f_n);
  for(i=0;i<3;i++){
    scanf("%c",&n);
    if(f_n==n){
      f=0;
    }
    f_n=n;
  }
  if(f==1){
    printf("Good");
  }else{
    printf("Bad");
  }
}