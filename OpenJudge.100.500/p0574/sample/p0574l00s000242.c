#include<stdio.h>
int main(void){
  int n,i,f_n,f=1;
  scanf("%d",&f_n);
  for(i=0;i<3;i++){
    scanf("%d",&n);
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